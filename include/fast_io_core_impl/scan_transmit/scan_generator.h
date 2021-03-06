#pragma once
namespace fast_io
{
namespace details
{

struct empty{};

}

template<buffer_input_stream input,typename Func>
struct scan_iterator
{
	using char_type = typename input::char_type;
#if __has_cpp_attribute(no_unique_address)
[[no_unique_address]]
#endif
	std::conditional_t<value_based_stream<input>,input,input*> nullable_handle;
	inline constexpr decltype(auto) reference() const noexcept
	{
		if constexpr(value_based_stream<input>)
			return nullable_handle;
		else
			return *nullable_handle;
	}
#if __has_cpp_attribute(no_unique_address)
[[no_unique_address]]
#endif
	Func function;
#if __has_cpp_attribute(no_unique_address)
[[no_unique_address]]
#endif
	std::conditional_t<contiguous_input_stream<input>,details::empty,internal_temporary_buffer<typename input::char_type>> buffer;
private:
	constexpr void scan_iterator_transmit_impl(char_type const* bg,char_type const* ed)
	{
		obuffer_set_curr(buffer,obuffer_begin(buffer));
		write(buffer,bg,ed);
		decltype(auto) ref{reference()};
		while(underflow(ref))
		{
			auto bg{ibuffer_begin(ref)};
			auto ed{ibuffer_end(ref)};
			auto it{function.search(bg,ed)};
			write(buffer,bg,it);
			if(it!=ed)
			{
				ibuffer_set_curr(ref,it+1);
				function.set_data(obuffer_begin(buffer),obuffer_curr(buffer));
				return;
			}
		}
		auto ob_bg{obuffer_begin(buffer)};
		auto ob_cr{obuffer_curr(buffer)};
		if(ob_bg==ob_cr)
			nullable_handle={};
		function.set_data(ob_bg,ob_cr);
	}
public:
	constexpr scan_iterator& operator++()
	{
		decltype(auto) ref{reference()};
		auto bg{ibuffer_curr(ref)};
		auto ed{ibuffer_end(ref)};
		auto it{function.search(bg,ed)};
		if constexpr(!contiguous_input_stream<input>)
		{
			if(it==ed)[[unlikely]]
			{
				scan_iterator_transmit_impl(bg,ed);
				return *this;
			}
		}
		function.set_data(bg,it);
		if constexpr(contiguous_input_stream<input>)
		{
			if(it==ed)
			{
				ibuffer_set_curr(ref,it);
				if(bg==it)
					nullable_handle={};
			}
			else
				ibuffer_set_curr(ref,it+1);
		}
		else
		{
			ibuffer_set_curr(ref,it+1);
		}
		return *this;
	}
	constexpr scan_iterator(input pt) requires(value_based_stream<input>):nullable_handle(pt)
	{
		++*this;
	}
	constexpr scan_iterator(input& pt) requires(!value_based_stream<input>):nullable_handle(std::addressof(pt))
	{
		++*this;
	}
	inline constexpr decltype(auto) operator*()
	{
		return function.get_data();
	}
	scan_iterator(scan_iterator const&)=delete;
	scan_iterator& operator=(scan_iterator const&)=delete;
};


template<buffer_input_stream input,typename Func>
inline constexpr bool operator!=(scan_iterator<input,Func> const& a, std::default_sentinel_t)
{
	return a.nullable_handle;
}

template<buffer_input_stream input,typename Func>
inline constexpr bool operator==(scan_iterator<input,Func> const& a, std::default_sentinel_t)
{
	return !a.nullable_handle;
}

template<buffer_input_stream input,typename Func>
inline constexpr bool operator!=(std::default_sentinel_t,scan_iterator<input,Func> const& a)
{
	return a.nullable_handle;
}

template<buffer_input_stream input,typename Func>
inline constexpr bool operator==(std::default_sentinel_t,scan_iterator<input,Func> const& a)
{
	return !a.nullable_handle;
}


template<input_stream input,typename Fun>
requires (buffer_input_stream<input>||mutex_stream<input>)
struct scan_generator
{
#if __has_cpp_attribute(no_unique_address)
[[no_unique_address]]
#endif
	std::conditional_t<value_based_stream<input>,input,input&> reference;
	constexpr scan_generator(input pt) requires(value_based_stream<input>):reference(pt)
	{
		if constexpr(mutex_stream<input>)
			reference.lock();
	}
	constexpr scan_generator(input& pt) requires(!value_based_stream<input>):reference(pt)
	{
		if constexpr(mutex_stream<input>)
			reference.lock();
	}
	scan_generator(scan_generator const&)=delete;
	scan_generator& operator=(scan_generator const&)=delete;
#if __cpp_constexpr >= 201907L
	constexpr 
#endif
	~scan_generator() requires(mutex_stream<input>)
	{
		reference.unlock();
	}
#if __cpp_constexpr >= 201907L
	constexpr 
#endif
	~scan_generator() = default;
};

template<input_stream input,typename Func>
inline constexpr auto begin(scan_generator<input,Func>& a)
{
	if constexpr(mutex_stream<input>)
		return scan_iterator<std::remove_cvref_t<decltype(a.reference.unlocked_handle())>,Func>{a.reference.unlocked_handle()};
	else
		return scan_iterator<input,Func>{a.reference};
}

template<input_stream input,typename Func>
inline constexpr std::default_sentinel_t end(scan_generator<input,Func>&)
{
	return {};
}
template<std::integral char_type,char_type seperator=u8'\n'>
struct scan_line_seperator
{
	std::basic_string_view<char_type> data;
	template<std::contiguous_iterator Iter>
	requires std::same_as<std::iter_value_t<Iter>,char_type>
	static constexpr Iter search(Iter bg,Iter ed) noexcept
	{
		return std::find(bg,ed,seperator);
	}
	constexpr void set_data(char_type const* bg,char_type const* ed) noexcept
	{
		data=std::basic_string_view<char_type>(bg,static_cast<std::size_t>(ed-bg));
	}
	constexpr std::basic_string_view<char_type> get_data() const noexcept
	{
		return data;
	}
};

template<input_stream input>
requires (buffer_input_stream<std::remove_cvref_t<input>>||mutex_stream<std::remove_cvref_t<input>>)
inline constexpr auto line_generator(input&& in)
{
	using no_cvref = std::remove_cvref_t<input>;
	if constexpr((std::is_trivially_copyable_v<no_cvref>||std::is_lvalue_reference_v<input>)&&value_based_stream<no_cvref>)
		return scan_generator<decltype(io_value_handle(in)),scan_line_seperator<typename no_cvref::char_type,u8'\n'>>{io_value_handle(in)};
	else if constexpr(std::is_lvalue_reference_v<input>)
		return scan_generator<no_cvref,scan_line_seperator<typename no_cvref::char_type,u8'\n'>>{in};
	else
		static_assert(std::is_lvalue_reference_v<input>,"should not be rvalue reference");
}

}
