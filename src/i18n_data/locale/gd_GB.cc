#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Scots Gaelic language locale for Great Britain"),.source=tsc("Akerbeltz\t\t;\t\tfast_io"),.address=tsc("1/2, 47 Wilton Street, Glasgow G20 6RT, UK\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc("Michael Bauer\t\t;\t\tfast_io"),.email=tsc("fios@akerbeltz.org;euloanty@live.com"),.tel=tsc(""),.language=tsc("Scottish Gaelic"),.territory=tsc("United Kingdom"),.revision=tsc("1.2"),.date=tsc("2013-04-25")},.monetary={.int_curr_symbol=tsc("GBP "),.currency_symbol=tsc("£"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("DiD"),tsc("DiL"),tsc("DiM"),tsc("DiC"),tsc("Dia"),tsc("Dih"),tsc("DiS")},.day={tsc("DiDòmhnaich"),tsc("DiLuain"),tsc("DiMàirt"),tsc("DiCiadain"),tsc("DiarDaoin"),tsc("DihAoine"),tsc("DiSathairne")},.abmon={tsc("Faoi"),tsc("Gearr"),tsc("Màrt"),tsc("Gibl"),tsc("Cèit"),tsc("Ògmh"),tsc("Iuch"),tsc("Lùna"),tsc("Sult"),tsc("Dàmh"),tsc("Samh"),tsc("Dùbh")},.mon={tsc("dhen Fhaoilleach"),tsc("dhen Ghearran"),tsc("dhen Mhàrt"),tsc("dhen Ghiblean"),tsc("dhen Chèitean"),tsc("dhen Ògmhios"),tsc("dhen Iuchar"),tsc("dhen Lùnastal"),tsc("dhen t-Sultain"),tsc("dhen Dàmhair"),tsc("dhen t-Samhain"),tsc("dhen Dùbhlachd")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%r"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc("m"),tsc("f")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1tTyY]"),.noexpr=tsc("^[-0cCnN]"),.yesstr=tsc("tha"),.nostr=tsc("chan eil")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%A %l"),.int_select=tsc("00"),.int_prefix=tsc("44")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Miss."),.name_mr=tsc("Mr."),.name_mrs=tsc("Mrs."),.name_ms=tsc("Ms.")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%S%N%c%N"),.country_name=tsc("An Rìoghachd Aonaichte"),.country_ab2=tsc("GB"),.country_ab3=tsc("GBR"),.country_num=826,.country_car=tsc("GB"),.country_isbn=tsc("0"),.lang_name=tsc("Gàidhlig"),.lang_ab=tsc("gd"),.lang_term=tsc("gla"),.lang_lib=tsc("gla")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Scots Gaelic language locale for Great Britain"),.source=tsc(L"Akerbeltz\t\t;\t\tfast_io"),.address=tsc(L"1/2, 47 Wilton Street, Glasgow G20 6RT, UK\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(L"Michael Bauer\t\t;\t\tfast_io"),.email=tsc(L"fios@akerbeltz.org;euloanty@live.com"),.tel=tsc(L""),.language=tsc(L"Scottish Gaelic"),.territory=tsc(L"United Kingdom"),.revision=tsc(L"1.2"),.date=tsc(L"2013-04-25")},.monetary={.int_curr_symbol=tsc(L"GBP "),.currency_symbol=tsc(L"£"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"DiD"),tsc(L"DiL"),tsc(L"DiM"),tsc(L"DiC"),tsc(L"Dia"),tsc(L"Dih"),tsc(L"DiS")},.day={tsc(L"DiDòmhnaich"),tsc(L"DiLuain"),tsc(L"DiMàirt"),tsc(L"DiCiadain"),tsc(L"DiarDaoin"),tsc(L"DihAoine"),tsc(L"DiSathairne")},.abmon={tsc(L"Faoi"),tsc(L"Gearr"),tsc(L"Màrt"),tsc(L"Gibl"),tsc(L"Cèit"),tsc(L"Ògmh"),tsc(L"Iuch"),tsc(L"Lùna"),tsc(L"Sult"),tsc(L"Dàmh"),tsc(L"Samh"),tsc(L"Dùbh")},.mon={tsc(L"dhen Fhaoilleach"),tsc(L"dhen Ghearran"),tsc(L"dhen Mhàrt"),tsc(L"dhen Ghiblean"),tsc(L"dhen Chèitean"),tsc(L"dhen Ògmhios"),tsc(L"dhen Iuchar"),tsc(L"dhen Lùnastal"),tsc(L"dhen t-Sultain"),tsc(L"dhen Dàmhair"),tsc(L"dhen t-Samhain"),tsc(L"dhen Dùbhlachd")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%r"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L"m"),tsc(L"f")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1tTyY]"),.noexpr=tsc(L"^[-0cCnN]"),.yesstr=tsc(L"tha"),.nostr=tsc(L"chan eil")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%A %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"44")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Miss."),.name_mr=tsc(L"Mr."),.name_mrs=tsc(L"Mrs."),.name_ms=tsc(L"Ms.")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%S%N%c%N"),.country_name=tsc(L"An Rìoghachd Aonaichte"),.country_ab2=tsc(L"GB"),.country_ab3=tsc(L"GBR"),.country_num=826,.country_car=tsc(L"GB"),.country_isbn=tsc(L"0"),.lang_name=tsc(L"Gàidhlig"),.lang_ab=tsc(L"gd"),.lang_term=tsc(L"gla"),.lang_lib=tsc(L"gla")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Scots Gaelic language locale for Great Britain"),.source=tsc(u8"Akerbeltz\t\t;\t\tfast_io"),.address=tsc(u8"1/2, 47 Wilton Street, Glasgow G20 6RT, UK\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u8"Michael Bauer\t\t;\t\tfast_io"),.email=tsc(u8"fios@akerbeltz.org;euloanty@live.com"),.tel=tsc(u8""),.language=tsc(u8"Scottish Gaelic"),.territory=tsc(u8"United Kingdom"),.revision=tsc(u8"1.2"),.date=tsc(u8"2013-04-25")},.monetary={.int_curr_symbol=tsc(u8"GBP "),.currency_symbol=tsc(u8"£"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"DiD"),tsc(u8"DiL"),tsc(u8"DiM"),tsc(u8"DiC"),tsc(u8"Dia"),tsc(u8"Dih"),tsc(u8"DiS")},.day={tsc(u8"DiDòmhnaich"),tsc(u8"DiLuain"),tsc(u8"DiMàirt"),tsc(u8"DiCiadain"),tsc(u8"DiarDaoin"),tsc(u8"DihAoine"),tsc(u8"DiSathairne")},.abmon={tsc(u8"Faoi"),tsc(u8"Gearr"),tsc(u8"Màrt"),tsc(u8"Gibl"),tsc(u8"Cèit"),tsc(u8"Ògmh"),tsc(u8"Iuch"),tsc(u8"Lùna"),tsc(u8"Sult"),tsc(u8"Dàmh"),tsc(u8"Samh"),tsc(u8"Dùbh")},.mon={tsc(u8"dhen Fhaoilleach"),tsc(u8"dhen Ghearran"),tsc(u8"dhen Mhàrt"),tsc(u8"dhen Ghiblean"),tsc(u8"dhen Chèitean"),tsc(u8"dhen Ògmhios"),tsc(u8"dhen Iuchar"),tsc(u8"dhen Lùnastal"),tsc(u8"dhen t-Sultain"),tsc(u8"dhen Dàmhair"),tsc(u8"dhen t-Samhain"),tsc(u8"dhen Dùbhlachd")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%r"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8"m"),tsc(u8"f")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1tTyY]"),.noexpr=tsc(u8"^[-0cCnN]"),.yesstr=tsc(u8"tha"),.nostr=tsc(u8"chan eil")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%A %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"44")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Miss."),.name_mr=tsc(u8"Mr."),.name_mrs=tsc(u8"Mrs."),.name_ms=tsc(u8"Ms.")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%S%N%c%N"),.country_name=tsc(u8"An Rìoghachd Aonaichte"),.country_ab2=tsc(u8"GB"),.country_ab3=tsc(u8"GBR"),.country_num=826,.country_car=tsc(u8"GB"),.country_isbn=tsc(u8"0"),.lang_name=tsc(u8"Gàidhlig"),.lang_ab=tsc(u8"gd"),.lang_term=tsc(u8"gla"),.lang_lib=tsc(u8"gla")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Scots Gaelic language locale for Great Britain"),.source=tsc(u"Akerbeltz\t\t;\t\tfast_io"),.address=tsc(u"1/2, 47 Wilton Street, Glasgow G20 6RT, UK\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u"Michael Bauer\t\t;\t\tfast_io"),.email=tsc(u"fios@akerbeltz.org;euloanty@live.com"),.tel=tsc(u""),.language=tsc(u"Scottish Gaelic"),.territory=tsc(u"United Kingdom"),.revision=tsc(u"1.2"),.date=tsc(u"2013-04-25")},.monetary={.int_curr_symbol=tsc(u"GBP "),.currency_symbol=tsc(u"£"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"DiD"),tsc(u"DiL"),tsc(u"DiM"),tsc(u"DiC"),tsc(u"Dia"),tsc(u"Dih"),tsc(u"DiS")},.day={tsc(u"DiDòmhnaich"),tsc(u"DiLuain"),tsc(u"DiMàirt"),tsc(u"DiCiadain"),tsc(u"DiarDaoin"),tsc(u"DihAoine"),tsc(u"DiSathairne")},.abmon={tsc(u"Faoi"),tsc(u"Gearr"),tsc(u"Màrt"),tsc(u"Gibl"),tsc(u"Cèit"),tsc(u"Ògmh"),tsc(u"Iuch"),tsc(u"Lùna"),tsc(u"Sult"),tsc(u"Dàmh"),tsc(u"Samh"),tsc(u"Dùbh")},.mon={tsc(u"dhen Fhaoilleach"),tsc(u"dhen Ghearran"),tsc(u"dhen Mhàrt"),tsc(u"dhen Ghiblean"),tsc(u"dhen Chèitean"),tsc(u"dhen Ògmhios"),tsc(u"dhen Iuchar"),tsc(u"dhen Lùnastal"),tsc(u"dhen t-Sultain"),tsc(u"dhen Dàmhair"),tsc(u"dhen t-Samhain"),tsc(u"dhen Dùbhlachd")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%r"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u"m"),tsc(u"f")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1tTyY]"),.noexpr=tsc(u"^[-0cCnN]"),.yesstr=tsc(u"tha"),.nostr=tsc(u"chan eil")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%A %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"44")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Miss."),.name_mr=tsc(u"Mr."),.name_mrs=tsc(u"Mrs."),.name_ms=tsc(u"Ms.")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%S%N%c%N"),.country_name=tsc(u"An Rìoghachd Aonaichte"),.country_ab2=tsc(u"GB"),.country_ab3=tsc(u"GBR"),.country_num=826,.country_car=tsc(u"GB"),.country_isbn=tsc(u"0"),.lang_name=tsc(u"Gàidhlig"),.lang_ab=tsc(u"gd"),.lang_term=tsc(u"gla"),.lang_lib=tsc(u"gla")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Scots Gaelic language locale for Great Britain"),.source=tsc(U"Akerbeltz\t\t;\t\tfast_io"),.address=tsc(U"1/2, 47 Wilton Street, Glasgow G20 6RT, UK\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(U"Michael Bauer\t\t;\t\tfast_io"),.email=tsc(U"fios@akerbeltz.org;euloanty@live.com"),.tel=tsc(U""),.language=tsc(U"Scottish Gaelic"),.territory=tsc(U"United Kingdom"),.revision=tsc(U"1.2"),.date=tsc(U"2013-04-25")},.monetary={.int_curr_symbol=tsc(U"GBP "),.currency_symbol=tsc(U"£"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"DiD"),tsc(U"DiL"),tsc(U"DiM"),tsc(U"DiC"),tsc(U"Dia"),tsc(U"Dih"),tsc(U"DiS")},.day={tsc(U"DiDòmhnaich"),tsc(U"DiLuain"),tsc(U"DiMàirt"),tsc(U"DiCiadain"),tsc(U"DiarDaoin"),tsc(U"DihAoine"),tsc(U"DiSathairne")},.abmon={tsc(U"Faoi"),tsc(U"Gearr"),tsc(U"Màrt"),tsc(U"Gibl"),tsc(U"Cèit"),tsc(U"Ògmh"),tsc(U"Iuch"),tsc(U"Lùna"),tsc(U"Sult"),tsc(U"Dàmh"),tsc(U"Samh"),tsc(U"Dùbh")},.mon={tsc(U"dhen Fhaoilleach"),tsc(U"dhen Ghearran"),tsc(U"dhen Mhàrt"),tsc(U"dhen Ghiblean"),tsc(U"dhen Chèitean"),tsc(U"dhen Ògmhios"),tsc(U"dhen Iuchar"),tsc(U"dhen Lùnastal"),tsc(U"dhen t-Sultain"),tsc(U"dhen Dàmhair"),tsc(U"dhen t-Samhain"),tsc(U"dhen Dùbhlachd")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%r"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U"m"),tsc(U"f")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1tTyY]"),.noexpr=tsc(U"^[-0cCnN]"),.yesstr=tsc(U"tha"),.nostr=tsc(U"chan eil")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%A %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"44")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Miss."),.name_mr=tsc(U"Mr."),.name_mrs=tsc(U"Mrs."),.name_ms=tsc(U"Ms.")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%S%N%c%N"),.country_name=tsc(U"An Rìoghachd Aonaichte"),.country_ab2=tsc(U"GB"),.country_ab3=tsc(U"GBR"),.country_num=826,.country_car=tsc(U"GB"),.country_isbn=tsc(U"0"),.lang_name=tsc(U"Gàidhlig"),.lang_ab=tsc(U"gd"),.lang_term=tsc(U"gla"),.lang_lib=tsc(U"gla")},.measurement={.measurement=1}};


}
}

#include"../main.h"