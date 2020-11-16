#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Serbian locale for Montenegro"),.source=tsc("sr_YU, sr_CS locale\t\t;\t\tfast_io"),.address=tsc("https://github.com/expnkx/fast_io"),.contact=tsc("Danilo Segan\t\t;\t\tfast_io"),.email=tsc("bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Serbian"),.territory=tsc("Montenegro"),.revision=tsc("1.2"),.date=tsc("2006-10-11")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("")},.time={.abday={tsc("нед"),tsc("пон"),tsc("уто"),tsc("сри"),tsc("чет"),tsc("пет"),tsc("суб")},.day={tsc("недјеља"),tsc("понедељак"),tsc("уторак"),tsc("сриједа"),tsc("четвртак"),tsc("петак"),tsc("субота")},.abmon={tsc("јан"),tsc("феб"),tsc("мар"),tsc("апр"),tsc("мај"),tsc("јун"),tsc("јул"),tsc("авг"),tsc("сеп"),tsc("окт"),tsc("нов"),tsc("дец")},.mon={tsc("јануар"),tsc("фебруар"),tsc("март"),tsc("април"),tsc("мај"),tsc("јун"),tsc("јул"),tsc("август"),tsc("септембар"),tsc("октобар"),tsc("новембар"),tsc("децембар")},.d_t_fmt=tsc("%A, %d. %B %Y. %T %Z"),.d_fmt=tsc("%d.%m.%Y."),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc("%T"),.date_fmt=tsc("%a, %e. %b %Y.  %H:%M:%S %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYdDДд]"),.noexpr=tsc("^[-0nNНн]"),.yesstr=tsc("да"),.nostr=tsc("не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%A %l"),.int_select=tsc("99"),.int_prefix=tsc("382")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_gen=tsc(""),.name_miss=tsc("г-ђица"),.name_mr=tsc("г-дин"),.name_mrs=tsc("г-ђа"),.name_ms=tsc("г-ђа")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Црна Гора"),.country_post=tsc("MNE"),.country_ab2=tsc("ME"),.country_ab3=tsc("MNE"),.country_num=499,.country_car=tsc("MNE"),.country_isbn=tsc("86"),.lang_name=tsc("српски"),.lang_ab=tsc("sr"),.lang_term=tsc("srp"),.lang_lib=tsc("srp")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Serbian locale for Montenegro"),.source=tsc(L"sr_YU, sr_CS locale\t\t;\t\tfast_io"),.address=tsc(L"https://github.com/expnkx/fast_io"),.contact=tsc(L"Danilo Segan\t\t;\t\tfast_io"),.email=tsc(L"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Serbian"),.territory=tsc(L"Montenegro"),.revision=tsc(L"1.2"),.date=tsc(L"2006-10-11")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"")},.time={.abday={tsc(L"нед"),tsc(L"пон"),tsc(L"уто"),tsc(L"сри"),tsc(L"чет"),tsc(L"пет"),tsc(L"суб")},.day={tsc(L"недјеља"),tsc(L"понедељак"),tsc(L"уторак"),tsc(L"сриједа"),tsc(L"четвртак"),tsc(L"петак"),tsc(L"субота")},.abmon={tsc(L"јан"),tsc(L"феб"),tsc(L"мар"),tsc(L"апр"),tsc(L"мај"),tsc(L"јун"),tsc(L"јул"),tsc(L"авг"),tsc(L"сеп"),tsc(L"окт"),tsc(L"нов"),tsc(L"дец")},.mon={tsc(L"јануар"),tsc(L"фебруар"),tsc(L"март"),tsc(L"април"),tsc(L"мај"),tsc(L"јун"),tsc(L"јул"),tsc(L"август"),tsc(L"септембар"),tsc(L"октобар"),tsc(L"новембар"),tsc(L"децембар")},.d_t_fmt=tsc(L"%A, %d. %B %Y. %T %Z"),.d_fmt=tsc(L"%d.%m.%Y."),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L"%T"),.date_fmt=tsc(L"%a, %e. %b %Y.  %H:%M:%S %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYdDДд]"),.noexpr=tsc(L"^[-0nNНн]"),.yesstr=tsc(L"да"),.nostr=tsc(L"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%A %l"),.int_select=tsc(L"99"),.int_prefix=tsc(L"382")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_gen=tsc(L""),.name_miss=tsc(L"г-ђица"),.name_mr=tsc(L"г-дин"),.name_mrs=tsc(L"г-ђа"),.name_ms=tsc(L"г-ђа")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Црна Гора"),.country_post=tsc(L"MNE"),.country_ab2=tsc(L"ME"),.country_ab3=tsc(L"MNE"),.country_num=499,.country_car=tsc(L"MNE"),.country_isbn=tsc(L"86"),.lang_name=tsc(L"српски"),.lang_ab=tsc(L"sr"),.lang_term=tsc(L"srp"),.lang_lib=tsc(L"srp")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Serbian locale for Montenegro"),.source=tsc(u8"sr_YU, sr_CS locale\t\t;\t\tfast_io"),.address=tsc(u8"https://github.com/expnkx/fast_io"),.contact=tsc(u8"Danilo Segan\t\t;\t\tfast_io"),.email=tsc(u8"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Serbian"),.territory=tsc(u8"Montenegro"),.revision=tsc(u8"1.2"),.date=tsc(u8"2006-10-11")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"")},.time={.abday={tsc(u8"нед"),tsc(u8"пон"),tsc(u8"уто"),tsc(u8"сри"),tsc(u8"чет"),tsc(u8"пет"),tsc(u8"суб")},.day={tsc(u8"недјеља"),tsc(u8"понедељак"),tsc(u8"уторак"),tsc(u8"сриједа"),tsc(u8"четвртак"),tsc(u8"петак"),tsc(u8"субота")},.abmon={tsc(u8"јан"),tsc(u8"феб"),tsc(u8"мар"),tsc(u8"апр"),tsc(u8"мај"),tsc(u8"јун"),tsc(u8"јул"),tsc(u8"авг"),tsc(u8"сеп"),tsc(u8"окт"),tsc(u8"нов"),tsc(u8"дец")},.mon={tsc(u8"јануар"),tsc(u8"фебруар"),tsc(u8"март"),tsc(u8"април"),tsc(u8"мај"),tsc(u8"јун"),tsc(u8"јул"),tsc(u8"август"),tsc(u8"септембар"),tsc(u8"октобар"),tsc(u8"новембар"),tsc(u8"децембар")},.d_t_fmt=tsc(u8"%A, %d. %B %Y. %T %Z"),.d_fmt=tsc(u8"%d.%m.%Y."),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8"%T"),.date_fmt=tsc(u8"%a, %e. %b %Y.  %H:%M:%S %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYdDДд]"),.noexpr=tsc(u8"^[-0nNНн]"),.yesstr=tsc(u8"да"),.nostr=tsc(u8"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%A %l"),.int_select=tsc(u8"99"),.int_prefix=tsc(u8"382")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_gen=tsc(u8""),.name_miss=tsc(u8"г-ђица"),.name_mr=tsc(u8"г-дин"),.name_mrs=tsc(u8"г-ђа"),.name_ms=tsc(u8"г-ђа")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Црна Гора"),.country_post=tsc(u8"MNE"),.country_ab2=tsc(u8"ME"),.country_ab3=tsc(u8"MNE"),.country_num=499,.country_car=tsc(u8"MNE"),.country_isbn=tsc(u8"86"),.lang_name=tsc(u8"српски"),.lang_ab=tsc(u8"sr"),.lang_term=tsc(u8"srp"),.lang_lib=tsc(u8"srp")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Serbian locale for Montenegro"),.source=tsc(u"sr_YU, sr_CS locale\t\t;\t\tfast_io"),.address=tsc(u"https://github.com/expnkx/fast_io"),.contact=tsc(u"Danilo Segan\t\t;\t\tfast_io"),.email=tsc(u"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Serbian"),.territory=tsc(u"Montenegro"),.revision=tsc(u"1.2"),.date=tsc(u"2006-10-11")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"")},.time={.abday={tsc(u"нед"),tsc(u"пон"),tsc(u"уто"),tsc(u"сри"),tsc(u"чет"),tsc(u"пет"),tsc(u"суб")},.day={tsc(u"недјеља"),tsc(u"понедељак"),tsc(u"уторак"),tsc(u"сриједа"),tsc(u"четвртак"),tsc(u"петак"),tsc(u"субота")},.abmon={tsc(u"јан"),tsc(u"феб"),tsc(u"мар"),tsc(u"апр"),tsc(u"мај"),tsc(u"јун"),tsc(u"јул"),tsc(u"авг"),tsc(u"сеп"),tsc(u"окт"),tsc(u"нов"),tsc(u"дец")},.mon={tsc(u"јануар"),tsc(u"фебруар"),tsc(u"март"),tsc(u"април"),tsc(u"мај"),tsc(u"јун"),tsc(u"јул"),tsc(u"август"),tsc(u"септембар"),tsc(u"октобар"),tsc(u"новембар"),tsc(u"децембар")},.d_t_fmt=tsc(u"%A, %d. %B %Y. %T %Z"),.d_fmt=tsc(u"%d.%m.%Y."),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u"%T"),.date_fmt=tsc(u"%a, %e. %b %Y.  %H:%M:%S %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYdDДд]"),.noexpr=tsc(u"^[-0nNНн]"),.yesstr=tsc(u"да"),.nostr=tsc(u"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%A %l"),.int_select=tsc(u"99"),.int_prefix=tsc(u"382")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_gen=tsc(u""),.name_miss=tsc(u"г-ђица"),.name_mr=tsc(u"г-дин"),.name_mrs=tsc(u"г-ђа"),.name_ms=tsc(u"г-ђа")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Црна Гора"),.country_post=tsc(u"MNE"),.country_ab2=tsc(u"ME"),.country_ab3=tsc(u"MNE"),.country_num=499,.country_car=tsc(u"MNE"),.country_isbn=tsc(u"86"),.lang_name=tsc(u"српски"),.lang_ab=tsc(u"sr"),.lang_term=tsc(u"srp"),.lang_lib=tsc(u"srp")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Serbian locale for Montenegro"),.source=tsc(U"sr_YU, sr_CS locale\t\t;\t\tfast_io"),.address=tsc(U"https://github.com/expnkx/fast_io"),.contact=tsc(U"Danilo Segan\t\t;\t\tfast_io"),.email=tsc(U"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Serbian"),.territory=tsc(U"Montenegro"),.revision=tsc(U"1.2"),.date=tsc(U"2006-10-11")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"")},.time={.abday={tsc(U"нед"),tsc(U"пон"),tsc(U"уто"),tsc(U"сри"),tsc(U"чет"),tsc(U"пет"),tsc(U"суб")},.day={tsc(U"недјеља"),tsc(U"понедељак"),tsc(U"уторак"),tsc(U"сриједа"),tsc(U"четвртак"),tsc(U"петак"),tsc(U"субота")},.abmon={tsc(U"јан"),tsc(U"феб"),tsc(U"мар"),tsc(U"апр"),tsc(U"мај"),tsc(U"јун"),tsc(U"јул"),tsc(U"авг"),tsc(U"сеп"),tsc(U"окт"),tsc(U"нов"),tsc(U"дец")},.mon={tsc(U"јануар"),tsc(U"фебруар"),tsc(U"март"),tsc(U"април"),tsc(U"мај"),tsc(U"јун"),tsc(U"јул"),tsc(U"август"),tsc(U"септембар"),tsc(U"октобар"),tsc(U"новембар"),tsc(U"децембар")},.d_t_fmt=tsc(U"%A, %d. %B %Y. %T %Z"),.d_fmt=tsc(U"%d.%m.%Y."),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U"%T"),.date_fmt=tsc(U"%a, %e. %b %Y.  %H:%M:%S %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYdDДд]"),.noexpr=tsc(U"^[-0nNНн]"),.yesstr=tsc(U"да"),.nostr=tsc(U"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%A %l"),.int_select=tsc(U"99"),.int_prefix=tsc(U"382")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_gen=tsc(U""),.name_miss=tsc(U"г-ђица"),.name_mr=tsc(U"г-дин"),.name_mrs=tsc(U"г-ђа"),.name_ms=tsc(U"г-ђа")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Црна Гора"),.country_post=tsc(U"MNE"),.country_ab2=tsc(U"ME"),.country_ab3=tsc(U"MNE"),.country_num=499,.country_car=tsc(U"MNE"),.country_isbn=tsc(U"86"),.lang_name=tsc(U"српски"),.lang_ab=tsc(U"sr"),.lang_term=tsc(U"srp"),.lang_lib=tsc(U"srp")},.measurement={.measurement=1}};


}
}

#include"../main.h"