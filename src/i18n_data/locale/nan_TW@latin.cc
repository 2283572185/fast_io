#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Minnan language locale for Taiwan"),.source=tsc("fast_io"),.address=tsc("https://github.com/expnkx/fast_io"),.contact=tsc("Arne Goetje\t\t;\t\tfast_io"),.email=tsc("arne@canonical.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Min Nan Chinese"),.territory=tsc("Taiwan"),.revision=tsc("0.1"),.date=tsc("2008-06-16")},.monetary={.int_curr_symbol=tsc("TWD "),.currency_symbol=tsc("NT$"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.int_p_cs_precedes=1,.int_p_sep_by_space=0,.int_n_cs_precedes=1,.int_n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1,.int_p_sign_posn=1,.int_n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("lp"),tsc("p1"),tsc("p2"),tsc("p3"),tsc("p4"),tsc("p5"),tsc("p6")},.day={tsc("lé-pài-ji̍t"),tsc("pài-it"),tsc("pài-jī"),tsc("pài-saⁿ"),tsc("pài-sì"),tsc("pài-gō͘"),tsc("pài-la̍k")},.abmon={tsc("1g"),tsc("2g"),tsc("3g"),tsc("4g"),tsc("5g"),tsc("6g"),tsc("7g"),tsc("8g"),tsc("9g"),tsc("10g"),tsc("11g"),tsc("12g")},.mon={tsc("1goe̍h"),tsc("2goe̍h"),tsc("3goe̍h"),tsc("4goe̍h"),tsc("5goe̍h"),tsc("6goe̍h"),tsc("7goe̍h"),tsc("8goe̍h"),tsc("9goe̍h"),tsc("10goe̍h"),tsc("11goe̍h"),tsc("12goe̍h")},.d_t_fmt=tsc("%Y %b %d (%a) %H:%M:%S %Z"),.d_fmt=tsc("%F"),.t_fmt=tsc("%r"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%Y %b %d (%a) %H:%M:%S %Z"),.am_pm={tsc("téng-po͘"),tsc("ē-po͘")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYsS]"),.noexpr=tsc("^[-0nNmM]"),.yesstr=tsc("Sī"),.nostr=tsc("M̄-Sī")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c-%a-%l"),.tel_dom_fmt=tsc("%A-%l"),.int_select=tsc("00"),.int_prefix=tsc("886")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("ko͘-niû"),.name_mr=tsc("sian-siⁿ"),.name_mrs=tsc("lú-sū"),.name_ms=tsc("sió-chiá")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%r %e %h %s%N%z %T%N%c%N"),.country_name=tsc("Tâi-oân"),.country_post=tsc("TW"),.country_ab2=tsc("TW"),.country_ab3=tsc("TWN"),.country_num=158,.country_car=tsc("RC"),.country_isbn=tsc("957"),.lang_name=tsc("Bân-lâm-gú"),.lang_term=tsc("nan"),.lang_lib=tsc("nan")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Minnan language locale for Taiwan"),.source=tsc(L"fast_io"),.address=tsc(L"https://github.com/expnkx/fast_io"),.contact=tsc(L"Arne Goetje\t\t;\t\tfast_io"),.email=tsc(L"arne@canonical.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Min Nan Chinese"),.territory=tsc(L"Taiwan"),.revision=tsc(L"0.1"),.date=tsc(L"2008-06-16")},.monetary={.int_curr_symbol=tsc(L"TWD "),.currency_symbol=tsc(L"NT$"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.int_p_cs_precedes=1,.int_p_sep_by_space=0,.int_n_cs_precedes=1,.int_n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1,.int_p_sign_posn=1,.int_n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"lp"),tsc(L"p1"),tsc(L"p2"),tsc(L"p3"),tsc(L"p4"),tsc(L"p5"),tsc(L"p6")},.day={tsc(L"lé-pài-ji̍t"),tsc(L"pài-it"),tsc(L"pài-jī"),tsc(L"pài-saⁿ"),tsc(L"pài-sì"),tsc(L"pài-gō͘"),tsc(L"pài-la̍k")},.abmon={tsc(L"1g"),tsc(L"2g"),tsc(L"3g"),tsc(L"4g"),tsc(L"5g"),tsc(L"6g"),tsc(L"7g"),tsc(L"8g"),tsc(L"9g"),tsc(L"10g"),tsc(L"11g"),tsc(L"12g")},.mon={tsc(L"1goe̍h"),tsc(L"2goe̍h"),tsc(L"3goe̍h"),tsc(L"4goe̍h"),tsc(L"5goe̍h"),tsc(L"6goe̍h"),tsc(L"7goe̍h"),tsc(L"8goe̍h"),tsc(L"9goe̍h"),tsc(L"10goe̍h"),tsc(L"11goe̍h"),tsc(L"12goe̍h")},.d_t_fmt=tsc(L"%Y %b %d (%a) %H:%M:%S %Z"),.d_fmt=tsc(L"%F"),.t_fmt=tsc(L"%r"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%Y %b %d (%a) %H:%M:%S %Z"),.am_pm={tsc(L"téng-po͘"),tsc(L"ē-po͘")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYsS]"),.noexpr=tsc(L"^[-0nNmM]"),.yesstr=tsc(L"Sī"),.nostr=tsc(L"M̄-Sī")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c-%a-%l"),.tel_dom_fmt=tsc(L"%A-%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"886")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"ko͘-niû"),.name_mr=tsc(L"sian-siⁿ"),.name_mrs=tsc(L"lú-sū"),.name_ms=tsc(L"sió-chiá")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%r %e %h %s%N%z %T%N%c%N"),.country_name=tsc(L"Tâi-oân"),.country_post=tsc(L"TW"),.country_ab2=tsc(L"TW"),.country_ab3=tsc(L"TWN"),.country_num=158,.country_car=tsc(L"RC"),.country_isbn=tsc(L"957"),.lang_name=tsc(L"Bân-lâm-gú"),.lang_term=tsc(L"nan"),.lang_lib=tsc(L"nan")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Minnan language locale for Taiwan"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://github.com/expnkx/fast_io"),.contact=tsc(u8"Arne Goetje\t\t;\t\tfast_io"),.email=tsc(u8"arne@canonical.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Min Nan Chinese"),.territory=tsc(u8"Taiwan"),.revision=tsc(u8"0.1"),.date=tsc(u8"2008-06-16")},.monetary={.int_curr_symbol=tsc(u8"TWD "),.currency_symbol=tsc(u8"NT$"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.int_p_cs_precedes=1,.int_p_sep_by_space=0,.int_n_cs_precedes=1,.int_n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1,.int_p_sign_posn=1,.int_n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"lp"),tsc(u8"p1"),tsc(u8"p2"),tsc(u8"p3"),tsc(u8"p4"),tsc(u8"p5"),tsc(u8"p6")},.day={tsc(u8"lé-pài-ji̍t"),tsc(u8"pài-it"),tsc(u8"pài-jī"),tsc(u8"pài-saⁿ"),tsc(u8"pài-sì"),tsc(u8"pài-gō͘"),tsc(u8"pài-la̍k")},.abmon={tsc(u8"1g"),tsc(u8"2g"),tsc(u8"3g"),tsc(u8"4g"),tsc(u8"5g"),tsc(u8"6g"),tsc(u8"7g"),tsc(u8"8g"),tsc(u8"9g"),tsc(u8"10g"),tsc(u8"11g"),tsc(u8"12g")},.mon={tsc(u8"1goe̍h"),tsc(u8"2goe̍h"),tsc(u8"3goe̍h"),tsc(u8"4goe̍h"),tsc(u8"5goe̍h"),tsc(u8"6goe̍h"),tsc(u8"7goe̍h"),tsc(u8"8goe̍h"),tsc(u8"9goe̍h"),tsc(u8"10goe̍h"),tsc(u8"11goe̍h"),tsc(u8"12goe̍h")},.d_t_fmt=tsc(u8"%Y %b %d (%a) %H:%M:%S %Z"),.d_fmt=tsc(u8"%F"),.t_fmt=tsc(u8"%r"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%Y %b %d (%a) %H:%M:%S %Z"),.am_pm={tsc(u8"téng-po͘"),tsc(u8"ē-po͘")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYsS]"),.noexpr=tsc(u8"^[-0nNmM]"),.yesstr=tsc(u8"Sī"),.nostr=tsc(u8"M̄-Sī")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c-%a-%l"),.tel_dom_fmt=tsc(u8"%A-%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"886")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"ko͘-niû"),.name_mr=tsc(u8"sian-siⁿ"),.name_mrs=tsc(u8"lú-sū"),.name_ms=tsc(u8"sió-chiá")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%r %e %h %s%N%z %T%N%c%N"),.country_name=tsc(u8"Tâi-oân"),.country_post=tsc(u8"TW"),.country_ab2=tsc(u8"TW"),.country_ab3=tsc(u8"TWN"),.country_num=158,.country_car=tsc(u8"RC"),.country_isbn=tsc(u8"957"),.lang_name=tsc(u8"Bân-lâm-gú"),.lang_term=tsc(u8"nan"),.lang_lib=tsc(u8"nan")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Minnan language locale for Taiwan"),.source=tsc(u"fast_io"),.address=tsc(u"https://github.com/expnkx/fast_io"),.contact=tsc(u"Arne Goetje\t\t;\t\tfast_io"),.email=tsc(u"arne@canonical.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Min Nan Chinese"),.territory=tsc(u"Taiwan"),.revision=tsc(u"0.1"),.date=tsc(u"2008-06-16")},.monetary={.int_curr_symbol=tsc(u"TWD "),.currency_symbol=tsc(u"NT$"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.int_p_cs_precedes=1,.int_p_sep_by_space=0,.int_n_cs_precedes=1,.int_n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1,.int_p_sign_posn=1,.int_n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"lp"),tsc(u"p1"),tsc(u"p2"),tsc(u"p3"),tsc(u"p4"),tsc(u"p5"),tsc(u"p6")},.day={tsc(u"lé-pài-ji̍t"),tsc(u"pài-it"),tsc(u"pài-jī"),tsc(u"pài-saⁿ"),tsc(u"pài-sì"),tsc(u"pài-gō͘"),tsc(u"pài-la̍k")},.abmon={tsc(u"1g"),tsc(u"2g"),tsc(u"3g"),tsc(u"4g"),tsc(u"5g"),tsc(u"6g"),tsc(u"7g"),tsc(u"8g"),tsc(u"9g"),tsc(u"10g"),tsc(u"11g"),tsc(u"12g")},.mon={tsc(u"1goe̍h"),tsc(u"2goe̍h"),tsc(u"3goe̍h"),tsc(u"4goe̍h"),tsc(u"5goe̍h"),tsc(u"6goe̍h"),tsc(u"7goe̍h"),tsc(u"8goe̍h"),tsc(u"9goe̍h"),tsc(u"10goe̍h"),tsc(u"11goe̍h"),tsc(u"12goe̍h")},.d_t_fmt=tsc(u"%Y %b %d (%a) %H:%M:%S %Z"),.d_fmt=tsc(u"%F"),.t_fmt=tsc(u"%r"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%Y %b %d (%a) %H:%M:%S %Z"),.am_pm={tsc(u"téng-po͘"),tsc(u"ē-po͘")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYsS]"),.noexpr=tsc(u"^[-0nNmM]"),.yesstr=tsc(u"Sī"),.nostr=tsc(u"M̄-Sī")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c-%a-%l"),.tel_dom_fmt=tsc(u"%A-%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"886")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"ko͘-niû"),.name_mr=tsc(u"sian-siⁿ"),.name_mrs=tsc(u"lú-sū"),.name_ms=tsc(u"sió-chiá")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%r %e %h %s%N%z %T%N%c%N"),.country_name=tsc(u"Tâi-oân"),.country_post=tsc(u"TW"),.country_ab2=tsc(u"TW"),.country_ab3=tsc(u"TWN"),.country_num=158,.country_car=tsc(u"RC"),.country_isbn=tsc(u"957"),.lang_name=tsc(u"Bân-lâm-gú"),.lang_term=tsc(u"nan"),.lang_lib=tsc(u"nan")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Minnan language locale for Taiwan"),.source=tsc(U"fast_io"),.address=tsc(U"https://github.com/expnkx/fast_io"),.contact=tsc(U"Arne Goetje\t\t;\t\tfast_io"),.email=tsc(U"arne@canonical.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Min Nan Chinese"),.territory=tsc(U"Taiwan"),.revision=tsc(U"0.1"),.date=tsc(U"2008-06-16")},.monetary={.int_curr_symbol=tsc(U"TWD "),.currency_symbol=tsc(U"NT$"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.int_p_cs_precedes=1,.int_p_sep_by_space=0,.int_n_cs_precedes=1,.int_n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1,.int_p_sign_posn=1,.int_n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"lp"),tsc(U"p1"),tsc(U"p2"),tsc(U"p3"),tsc(U"p4"),tsc(U"p5"),tsc(U"p6")},.day={tsc(U"lé-pài-ji̍t"),tsc(U"pài-it"),tsc(U"pài-jī"),tsc(U"pài-saⁿ"),tsc(U"pài-sì"),tsc(U"pài-gō͘"),tsc(U"pài-la̍k")},.abmon={tsc(U"1g"),tsc(U"2g"),tsc(U"3g"),tsc(U"4g"),tsc(U"5g"),tsc(U"6g"),tsc(U"7g"),tsc(U"8g"),tsc(U"9g"),tsc(U"10g"),tsc(U"11g"),tsc(U"12g")},.mon={tsc(U"1goe̍h"),tsc(U"2goe̍h"),tsc(U"3goe̍h"),tsc(U"4goe̍h"),tsc(U"5goe̍h"),tsc(U"6goe̍h"),tsc(U"7goe̍h"),tsc(U"8goe̍h"),tsc(U"9goe̍h"),tsc(U"10goe̍h"),tsc(U"11goe̍h"),tsc(U"12goe̍h")},.d_t_fmt=tsc(U"%Y %b %d (%a) %H:%M:%S %Z"),.d_fmt=tsc(U"%F"),.t_fmt=tsc(U"%r"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%Y %b %d (%a) %H:%M:%S %Z"),.am_pm={tsc(U"téng-po͘"),tsc(U"ē-po͘")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYsS]"),.noexpr=tsc(U"^[-0nNmM]"),.yesstr=tsc(U"Sī"),.nostr=tsc(U"M̄-Sī")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c-%a-%l"),.tel_dom_fmt=tsc(U"%A-%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"886")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"ko͘-niû"),.name_mr=tsc(U"sian-siⁿ"),.name_mrs=tsc(U"lú-sū"),.name_ms=tsc(U"sió-chiá")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%r %e %h %s%N%z %T%N%c%N"),.country_name=tsc(U"Tâi-oân"),.country_post=tsc(U"TW"),.country_ab2=tsc(U"TW"),.country_ab3=tsc(U"TWN"),.country_num=158,.country_car=tsc(U"RC"),.country_isbn=tsc(U"957"),.lang_name=tsc(U"Bân-lâm-gú"),.lang_term=tsc(U"nan"),.lang_lib=tsc(U"nan")},.measurement={.measurement=1}};


}
}

#include"../main.h"