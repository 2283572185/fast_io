#pragma once

namespace fast_io
{

enum class buffer_mode
{
in=1<<0,
out=1<<1,
tie=1<<2,
io=in|out|tie,
decorator=1<<3,
secure_clear=1<<4
};

constexpr buffer_mode operator&(buffer_mode x, buffer_mode y) noexcept
{
using utype = typename std::underlying_type<buffer_mode>::type;
return static_cast<buffer_mode>(static_cast<utype>(x) & static_cast<utype>(y));
}

constexpr buffer_mode operator|(buffer_mode x, buffer_mode y) noexcept
{
using utype = typename std::underlying_type<buffer_mode>::type;
return static_cast<buffer_mode>(static_cast<utype>(x) | static_cast<utype>(y));
}

constexpr buffer_mode operator^(buffer_mode x, buffer_mode y) noexcept
{
using utype = typename std::underlying_type<buffer_mode>::type;
return static_cast<buffer_mode>(static_cast<utype>(x) ^ static_cast<utype>(y));
}

constexpr buffer_mode operator~(buffer_mode x) noexcept
{
using utype = typename std::underlying_type<buffer_mode>::type;
return static_cast<buffer_mode>(~static_cast<utype>(x));
}

inline constexpr buffer_mode& operator&=(buffer_mode& x, buffer_mode y) noexcept{return x=x&y;}

inline constexpr buffer_mode& operator|=(buffer_mode& x, buffer_mode y) noexcept{return x=x|y;}

inline constexpr buffer_mode& operator^=(buffer_mode& x, buffer_mode y) noexcept{return x=x^y;}


template<typename char_type>
inline constexpr std::size_t io_default_buffer_size = details::cal_buffer_size<char_type,true>();

template<typename pointer_type>
struct basic_buffer_pointers
{
	pointer_type beg{},curr{},ed{};
};

struct empty_buffer_pointers
{};

namespace details
{
template<stream handle_type>
inline 
#if __cpp_consteval >= 201811L
consteval
#else
constexpr
#endif
bool constraint_buffer_mode(buffer_mode mode) noexcept
{
	if(((mode&buffer_mode::in)==buffer_mode::in)&&(!input_stream<handle_type>))
		return false;
	if(((mode&buffer_mode::out)==buffer_mode::out)&&(!output_stream<handle_type>))
		return false;
	if(secure_clear_requirement_stream<handle_type>&&((mode&buffer_mode::secure_clear)!=buffer_mode::secure_clear))
		return false;
	return true;
}

template<typename allocator_type,typename allocator_type::size_type buffer_size>
struct allocator_guard
{
	using allocator_traits = std::allocator_traits<allocator_type>;
	[[no_unique_address]] std::conditional_t<std::is_empty_v<allocator_type>,allocator_type,allocator_type&> alloc;
	[[no_unique_address]] allocator_type::pointer ptr;
	constexpr ~allocator_guard()
	{
		if(ptr)
			allocator_traits::deallocate(alloc,ptr,buffer_size);
	}
};
}

template<stream handletype,
	buffer_mode mde,
	typename Decorator = void,
	typename Allocator = io_aligned_allocator<typename handletype::char_type>,
	std::size_t bfs = std::min(std::allocator_traits<Allocator>::max_size(),io_default_buffer_size<typename handletype::char_type>)>
requires (details::constraint_buffer_mode<handletype>(mde)&&(bfs!=0&&(bfs<=std::allocator_traits<Allocator>::max_size())))
class basic_io_buffer
{
public:
	using handle_type = handletype;
	using allocator_type = Allocator;
	using allocator_traits = std::allocator_traits<allocator_type>;
	using decorator_type = Decorator;
	using char_type = typename allocator_traits::value_type;
	using pointer = typename allocator_traits::pointer;
	using const_pointer = typename allocator_traits::const_pointer;
	using size_type = typename allocator_traits::size_type;
	using difference_type = typename allocator_traits::difference_type;
	using reference = char_type&;
	using const_reference = char_type const&;
	inline static constexpr buffer_mode mode = mde;
	inline static constexpr size_type buffer_size = bfs;
	[[no_unique_address]] std::conditional_t<(mode&buffer_mode::in)==buffer_mode::in,basic_buffer_pointers<pointer>,empty_buffer_pointers> ibuffer;
	[[no_unique_address]] std::conditional_t<(mode&buffer_mode::out)==buffer_mode::out,basic_buffer_pointers<pointer>,empty_buffer_pointers> obuffer;
	[[no_unique_address]] handle_type handle;
	[[no_unique_address]] std::conditional_t<std::same_as<Decorator,void>,empty_buffer_pointers,Decorator> decorator;
	[[no_unique_address]] allocator_type allocator;
	constexpr basic_io_buffer()=default;
	template<typename... Args>
	requires ((std::is_empty_v<allocator_type>)&&
		(std::same_as<decorator_type,void>||(std::is_empty_v<decorator_type>&&std::default_initializable<decorator_type>))&&std::default_initializable<allocator_type>&&(std::constructible_from<handle_type,Args...>))
	explicit constexpr basic_io_buffer(Args&& ...args):handle(std::forward<Args>(args)...){}

	template<typename... Args1,typename... Args2>
	requires ((!std::is_empty_v<allocator_type>)
		&&(std::constructible_from<handle_type,Args1...>)
		&&(std::constructible_from<allocator_type,Args2...>))
	constexpr basic_io_buffer(std::piecewise_construct_t,
		std::tuple<Args1...> args1,
		std::tuple<Args2...> args2)
	{
		std::apply([&](Args1&& ...args)
		{
			handle=handle_type(std::forward<Args1>(args)...);
		},args1);
		std::apply([&](Args2&& ...args)
		{
			allocator=allocator_type(std::forward<Args2>(args)...);
		},args2);
	}

private:
	constexpr void close_throw_impl()
	{
		if(obuffer.beg!=obuffer.curr)
			write(handle,obuffer.beg,obuffer.curr);
	}
	constexpr void close_impl() noexcept
	{
		if constexpr((mode&buffer_mode::out)==buffer_mode::out)
		{
			if constexpr(noexcept(
				write(handle,obuffer.beg,obuffer.curr)
			))
			{
				close_throw_impl();
			}
			else
			{
#ifdef __cpp_exceptions
				try
				{
#endif
					close_throw_impl();
#ifdef __cpp_exceptions
				}
				catch(...)
				{
				}
#endif
			}
		}
	}
	constexpr void cleanup_impl() noexcept
	{
		if constexpr((mode&buffer_mode::secure_clear)==buffer_mode::secure_clear)
		{
			if constexpr((mode&buffer_mode::out)==buffer_mode::out)
				if(obuffer.beg)
				{
					secure_clear(std::to_address(obuffer.beg),sizeof(char_type)*buffer_size);
					allocator_traits::deallocate(obuffer.beg,buffer_size);
				}
			if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				if(ibuffer.beg)
				{
					secure_clear(std::to_address(ibuffer.beg),sizeof(char_type)*buffer_size);
					allocator_traits::deallocate(ibuffer.beg,buffer_size);
				}
		}
		else
		{
			if constexpr((mode&buffer_mode::out)==buffer_mode::out)
				if(obuffer.beg)
					allocator_traits::deallocate(obuffer.beg,buffer_size);
			if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				if(ibuffer.beg)
					allocator_traits::deallocate(ibuffer.beg,buffer_size);
		}
	}
public:

	constexpr basic_io_buffer(basic_io_buffer&& other) noexcept:
		ibuffer(other.ibuffer),obuffer(other.obuffer),
		handle(std::move(other.handle)),decorator(std::move(other.decorator)),allocator(std::move(other.allocator))
	{
		other.ibuffer={};
		other.obuffer={};
	}

	constexpr basic_io_buffer(basic_io_buffer&& other, allocator_type const& alloc)
		noexcept(allocator_traits::is_always_equal) :
		handle(std::move(other.handle)),decorator(std::move(other.decorator)),allocator(alloc)
	{
		if constexpr(!allocator_traits::is_always_equal)
		{
			if(alloc!=other.allocator)
			{
				if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				{
					{
						std::size_t const sz(other.ibuffer.ed-other.ibuffer.curr);
						if(sz)
						{
							ibuffer.beg=allocator_traits::allocate(allocator,bfs);
							ibuffer.ed=ibuffer.beg+buffer_size;
							ibuffer.curr=non_overlapped_copy_n(other.ibuffer.curr,sz,ibuffer.beg);
						}
					}
					if constexpr((mode&buffer_mode::out)==buffer_mode::out)
					{
						std::size_t sz(other.obuffer.ed-other.obuffer.curr);
						if(sz)
						{
							details::allocator_guard<allocator_type,buffer_size> gd{allocator,obuffer.beg};
							obuffer.curr=obuffer.beg=allocator_traits::allocate(allocator,bfs);
							obuffer.ed=non_overlapped_copy_n(other.obuffer.beg,sz,obuffer.beg);
						}
					}
				}
				else
				{
					if constexpr((mode&buffer_mode::out)==buffer_mode::out)
					{
						std::size_t sz(other.obuffer.ed-other.obuffer.curr);
						if(sz)
						{
							obuffer.curr=obuffer.beg=allocator_traits::allocate(allocator,bfs);
							obuffer.ed=non_overlapped_copy_n(other.obuffer.beg,sz,obuffer.beg);
						}
					}
				}
				return;
			}
		}
		ibuffer=other.ibuffer;
		obuffer=other.obuffer;
		other.ibuffer={};
		other.obuffer={};
	}

	constexpr basic_io_buffer(basic_io_buffer const& other) requires(std::copyable<handle_type>&&std::copyable<decorator_type>):
			handle(other.handle),decorator(other.decorator),allocator(allocator_traits::select_on_container_copy_construction(other.alloc)){}

	constexpr basic_io_buffer(basic_io_buffer const& other, allocator_type const& alloc) requires(std::copyable<handle_type>&&std::copyable<decorator_type>):
			handle(other.handle),decorator(other.decorator),allocator(alloc){}

	constexpr std::size_t max_size() noexcept
	{
		return allocator_traits::max_size();
	}

	constexpr void close() requires(closable_stream<handle_type>)
	{
		close_throw_impl();
		handle.close();
		if constexpr((mode&buffer_mode::in)==buffer_mode::in)
			ibuffer.ed=ibuffer.curr=ibuffer.beg;
		if constexpr((mode&buffer_mode::out)==buffer_mode::out)
			obuffer.curr=obuffer.beg;
	}
	constexpr basic_io_buffer& operator=(basic_io_buffer const& other) requires(std::copyable<handle_type>&&std::copyable<decorator_type>)
	{
		close_throw_impl();
		if constexpr(allocator_traits::propagate_on_container_copy_assignment::value)
		{
			if(other.allocator!=this->allocator)
			{
				cleanup_impl();
				if constexpr((mode&buffer_mode::in)==buffer_mode::in)
					ibuffer={};
				if constexpr((mode&buffer_mode::out)==buffer_mode::out)
					obuffer={};
			}
			else
			{
				if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				{
					if(ibuffer.beg)
						ibuffer.ed=ibuffer.curr=ibuffer.beg;
				}
				if constexpr((mode&buffer_mode::out)==buffer_mode::out)
				{
					if(obuffer.beg)
						obuffer.curr=obuffer.beg;
				}
			}
		}
		else
		{
			if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				ibuffer.ed=ibuffer.curr=ibuffer.beg;
			if constexpr((mode&buffer_mode::out)==buffer_mode::out)
				obuffer.curr=obuffer.beg;
		}
		handle=other.handle;
		decorator=other.decorator;
		allocator=other.allocator;
		return *this;
	}

	constexpr basic_io_buffer& operator=(basic_io_buffer&& other)
		noexcept(allocator_traits::propagate_on_container_move_assignment::value
			||allocator_traits::is_always_equal::value)
	{
		if(std::addressof(other)==this)
			return *this;
		close_impl();
		if constexpr(!allocator_traits::propagate_on_container_move_assignment::value
			&&!allocator_traits::is_always_equal::value)
		{
			if(other.allocator!=this->allocator)
			{
				if constexpr((mode&buffer_mode::in)==buffer_mode::in)
				{
					{
						std::size_t const sz(other.ibuffer.ed-other.ibuffer.curr);
						if(sz)
						{
							ibuffer.beg=allocator_traits::allocate(allocator,bfs);
							ibuffer.ed=ibuffer.beg+buffer_size;
							ibuffer.curr=non_overlapped_copy_n(other.ibuffer.curr,sz,ibuffer.beg);
						}
					}
					if constexpr((mode&buffer_mode::out)==buffer_mode::out)
					{
						std::size_t sz(other.obuffer.ed-other.obuffer.curr);
						if(sz)
						{
							details::allocator_guard<allocator_type,buffer_size> gd{allocator,obuffer.beg};
							obuffer.curr=obuffer.beg=allocator_traits::allocate(allocator,bfs);
							obuffer.ed=non_overlapped_copy_n(other.obuffer.beg,sz,obuffer.beg);
						}
					}
				}
				else
				{
					if constexpr((mode&buffer_mode::out)==buffer_mode::out)
					{
						std::size_t sz(other.obuffer.ed-other.obuffer.curr);
						if(sz)
						{
							obuffer.curr=obuffer.beg=allocator_traits::allocate(allocator,bfs);
							obuffer.ed=non_overlapped_copy_n(other.obuffer.beg,sz,obuffer.beg);
						}
					}
				}
				handle=std::move(other.handle);
				decorator=std::move(other.decorator);
				allocator=std::move(other.allocator);
				return *this;
			}
		}
		handle=std::move(other.handle);
		decorator=std::move(other.decorator);
		allocator=std::move(other.allocator);
		obuffer=std::move(other.obuffer);
		ibuffer=std::move(other.ibuffer);
		other.obuffer={};
		other.ibuffer={};
		return *this;
	}
	constexpr void swap(basic_io_buffer& other) noexcept(allocator_traits::propagate_on_container_swap::value||allocator_traits::is_always_equal::value)
	{
/*
If std::allocator_traits<allocator_type>::propagate_on_container_swap::value is true, then the allocators are exchanged using an unqualified call to non-member swap. Otherwise, they are not swapped (and if get_allocator() != other.get_allocator(), the behavior is undefined).

WTF is this garbage?

*/
		if constexpr(std::allocator_traits<allocator_type>::propagate_on_container_swap::value)
		{
			if(other.allocator!=this->allocator)
				return;
		}
		using std::swap;
		swap(handle,other.handle);
		swap(decorator,other.decorator);
		swap(allocator,other.allocator);
		swap(obuffer,other.obuffer);
		swap(ibuffer,other.ibuffer);
	}
	constexpr ~basic_io_buffer()
	{
		close_impl();
		cleanup_impl();
	}
};

template<stream handletype,buffer_mode mde,typename Decorator,typename Allocator,std::size_t bfs>
inline constexpr void swap(basic_io_buffer<handletype,mde,Decorator,Allocator,bfs>& lhs,basic_io_buffer<handletype,mde,Decorator,Allocator,bfs>& rhs)
	noexcept(noexcept(lhs.swap(rhs)))
{
	lhs.swap(rhs);
}

}