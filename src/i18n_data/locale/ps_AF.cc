#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Pashto locale for Afghanistan"),.source=tsc("Nasir Gulzade\t\t;\t\tfast_io"),.address=tsc("see e-mail.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc("Nasir Gulzade\t\t;\t\tfast_io"),.email=tsc("nasirgulzade@hotmail.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Pashto"),.territory=tsc("Afghanistan"),.revision=tsc("0.2"),.date=tsc("2009-01-16")},.monetary={.int_curr_symbol=tsc("AFN "),.currency_symbol=tsc("؋"),.mon_decimal_point=tsc("٫"),.mon_thousands_sep=tsc("٬"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("٫"),.thousands_sep=tsc("٬"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("ی."),tsc("د."),tsc("س."),tsc("چ."),tsc("پ."),tsc("ج."),tsc("ش.")},.day={tsc("یکشنبه"),tsc("دوشنبه"),tsc("سه‌شنبه"),tsc("چارشنبه"),tsc("پنجشنبه"),tsc("جمعه"),tsc("شنبه")},.abmon={tsc("جنوري"),tsc("فبروري"),tsc("مارچ"),tsc("اپریل"),tsc("مۍ"),tsc("جون"),tsc("جولای"),tsc("اګست"),tsc("سپتمبر"),tsc("اکتوبر"),tsc("نومبر"),tsc("دسمبر")},.mon={tsc("جنوري"),tsc("فبروري"),tsc("مارچ"),tsc("اپریل"),tsc("مۍ"),tsc("جون"),tsc("جولای"),tsc("اګست"),tsc("سپتمبر"),tsc("اکتوبر"),tsc("نومبر"),tsc("دسمبر")},.d_t_fmt=tsc("%A د %Y د %B %e، %H:%M:%S"),.d_fmt=tsc("د %Y د %B %e"),.t_fmt=tsc("%H:%M:%S"),.t_fmt_ampm=tsc("‫%I:%M:%S %p‬"),.date_fmt=tsc("%A د %Y د %B %e، %Z %H:%M:%S"),.am_pm={tsc("غ.م."),tsc("غ.و.")},.week={7,19971130,1},.first_weekday=7,.first_workday=7,.cal_direction=3},.messages={.yesexpr=tsc("^[+1yYبf]"),.noexpr=tsc("^[-0nNخنo]"),.yesstr=tsc("هو"),.nostr=tsc("نه")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%A‒%l"),.int_select=tsc("00"),.int_prefix=tsc("93")},.name={.name_fmt=tsc("%s%t%p%t%g%t%m%t%f"),.name_gen=tsc(""),.name_miss=tsc("بي بي"),.name_mr=tsc("ښاغلې"),.name_mrs=tsc("بي بي"),.name_ms=tsc("بي بي")},.address={.postal_fmt=tsc("%a%N%f%N%d%N%b%N%s %h %e %r%N%C-%z %T%N%c%N"),.country_name=tsc("افغانستان"),.country_post=tsc("AF"),.country_ab2=tsc("AF"),.country_ab3=tsc("AFG"),.country_num=4,.country_car=tsc("AFG"),.lang_name=tsc("پښتو"),.lang_ab=tsc("ps"),.lang_term=tsc("pus"),.lang_lib=tsc("pus")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Pashto locale for Afghanistan"),.source=tsc(L"Nasir Gulzade\t\t;\t\tfast_io"),.address=tsc(L"see e-mail.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(L"Nasir Gulzade\t\t;\t\tfast_io"),.email=tsc(L"nasirgulzade@hotmail.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Pashto"),.territory=tsc(L"Afghanistan"),.revision=tsc(L"0.2"),.date=tsc(L"2009-01-16")},.monetary={.int_curr_symbol=tsc(L"AFN "),.currency_symbol=tsc(L"؋"),.mon_decimal_point=tsc(L"٫"),.mon_thousands_sep=tsc(L"٬"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"٫"),.thousands_sep=tsc(L"٬"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"ی."),tsc(L"د."),tsc(L"س."),tsc(L"چ."),tsc(L"پ."),tsc(L"ج."),tsc(L"ش.")},.day={tsc(L"یکشنبه"),tsc(L"دوشنبه"),tsc(L"سه‌شنبه"),tsc(L"چارشنبه"),tsc(L"پنجشنبه"),tsc(L"جمعه"),tsc(L"شنبه")},.abmon={tsc(L"جنوري"),tsc(L"فبروري"),tsc(L"مارچ"),tsc(L"اپریل"),tsc(L"مۍ"),tsc(L"جون"),tsc(L"جولای"),tsc(L"اګست"),tsc(L"سپتمبر"),tsc(L"اکتوبر"),tsc(L"نومبر"),tsc(L"دسمبر")},.mon={tsc(L"جنوري"),tsc(L"فبروري"),tsc(L"مارچ"),tsc(L"اپریل"),tsc(L"مۍ"),tsc(L"جون"),tsc(L"جولای"),tsc(L"اګست"),tsc(L"سپتمبر"),tsc(L"اکتوبر"),tsc(L"نومبر"),tsc(L"دسمبر")},.d_t_fmt=tsc(L"%A د %Y د %B %e، %H:%M:%S"),.d_fmt=tsc(L"د %Y د %B %e"),.t_fmt=tsc(L"%H:%M:%S"),.t_fmt_ampm=tsc(L"‫%I:%M:%S %p‬"),.date_fmt=tsc(L"%A د %Y د %B %e، %Z %H:%M:%S"),.am_pm={tsc(L"غ.م."),tsc(L"غ.و.")},.week={7,19971130,1},.first_weekday=7,.first_workday=7,.cal_direction=3},.messages={.yesexpr=tsc(L"^[+1yYبf]"),.noexpr=tsc(L"^[-0nNخنo]"),.yesstr=tsc(L"هو"),.nostr=tsc(L"نه")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%A‒%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"93")},.name={.name_fmt=tsc(L"%s%t%p%t%g%t%m%t%f"),.name_gen=tsc(L""),.name_miss=tsc(L"بي بي"),.name_mr=tsc(L"ښاغلې"),.name_mrs=tsc(L"بي بي"),.name_ms=tsc(L"بي بي")},.address={.postal_fmt=tsc(L"%a%N%f%N%d%N%b%N%s %h %e %r%N%C-%z %T%N%c%N"),.country_name=tsc(L"افغانستان"),.country_post=tsc(L"AF"),.country_ab2=tsc(L"AF"),.country_ab3=tsc(L"AFG"),.country_num=4,.country_car=tsc(L"AFG"),.lang_name=tsc(L"پښتو"),.lang_ab=tsc(L"ps"),.lang_term=tsc(L"pus"),.lang_lib=tsc(L"pus")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Pashto locale for Afghanistan"),.source=tsc(u8"Nasir Gulzade\t\t;\t\tfast_io"),.address=tsc(u8"see e-mail.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u8"Nasir Gulzade\t\t;\t\tfast_io"),.email=tsc(u8"nasirgulzade@hotmail.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Pashto"),.territory=tsc(u8"Afghanistan"),.revision=tsc(u8"0.2"),.date=tsc(u8"2009-01-16")},.monetary={.int_curr_symbol=tsc(u8"AFN "),.currency_symbol=tsc(u8"؋"),.mon_decimal_point=tsc(u8"٫"),.mon_thousands_sep=tsc(u8"٬"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"٫"),.thousands_sep=tsc(u8"٬"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"ی."),tsc(u8"د."),tsc(u8"س."),tsc(u8"چ."),tsc(u8"پ."),tsc(u8"ج."),tsc(u8"ش.")},.day={tsc(u8"یکشنبه"),tsc(u8"دوشنبه"),tsc(u8"سه‌شنبه"),tsc(u8"چارشنبه"),tsc(u8"پنجشنبه"),tsc(u8"جمعه"),tsc(u8"شنبه")},.abmon={tsc(u8"جنوري"),tsc(u8"فبروري"),tsc(u8"مارچ"),tsc(u8"اپریل"),tsc(u8"مۍ"),tsc(u8"جون"),tsc(u8"جولای"),tsc(u8"اګست"),tsc(u8"سپتمبر"),tsc(u8"اکتوبر"),tsc(u8"نومبر"),tsc(u8"دسمبر")},.mon={tsc(u8"جنوري"),tsc(u8"فبروري"),tsc(u8"مارچ"),tsc(u8"اپریل"),tsc(u8"مۍ"),tsc(u8"جون"),tsc(u8"جولای"),tsc(u8"اګست"),tsc(u8"سپتمبر"),tsc(u8"اکتوبر"),tsc(u8"نومبر"),tsc(u8"دسمبر")},.d_t_fmt=tsc(u8"%A د %Y د %B %e، %H:%M:%S"),.d_fmt=tsc(u8"د %Y د %B %e"),.t_fmt=tsc(u8"%H:%M:%S"),.t_fmt_ampm=tsc(u8"‫%I:%M:%S %p‬"),.date_fmt=tsc(u8"%A د %Y د %B %e، %Z %H:%M:%S"),.am_pm={tsc(u8"غ.م."),tsc(u8"غ.و.")},.week={7,19971130,1},.first_weekday=7,.first_workday=7,.cal_direction=3},.messages={.yesexpr=tsc(u8"^[+1yYبf]"),.noexpr=tsc(u8"^[-0nNخنo]"),.yesstr=tsc(u8"هو"),.nostr=tsc(u8"نه")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%A‒%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"93")},.name={.name_fmt=tsc(u8"%s%t%p%t%g%t%m%t%f"),.name_gen=tsc(u8""),.name_miss=tsc(u8"بي بي"),.name_mr=tsc(u8"ښاغلې"),.name_mrs=tsc(u8"بي بي"),.name_ms=tsc(u8"بي بي")},.address={.postal_fmt=tsc(u8"%a%N%f%N%d%N%b%N%s %h %e %r%N%C-%z %T%N%c%N"),.country_name=tsc(u8"افغانستان"),.country_post=tsc(u8"AF"),.country_ab2=tsc(u8"AF"),.country_ab3=tsc(u8"AFG"),.country_num=4,.country_car=tsc(u8"AFG"),.lang_name=tsc(u8"پښتو"),.lang_ab=tsc(u8"ps"),.lang_term=tsc(u8"pus"),.lang_lib=tsc(u8"pus")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Pashto locale for Afghanistan"),.source=tsc(u"Nasir Gulzade\t\t;\t\tfast_io"),.address=tsc(u"see e-mail.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u"Nasir Gulzade\t\t;\t\tfast_io"),.email=tsc(u"nasirgulzade@hotmail.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Pashto"),.territory=tsc(u"Afghanistan"),.revision=tsc(u"0.2"),.date=tsc(u"2009-01-16")},.monetary={.int_curr_symbol=tsc(u"AFN "),.currency_symbol=tsc(u"؋"),.mon_decimal_point=tsc(u"٫"),.mon_thousands_sep=tsc(u"٬"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"٫"),.thousands_sep=tsc(u"٬"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"ی."),tsc(u"د."),tsc(u"س."),tsc(u"چ."),tsc(u"پ."),tsc(u"ج."),tsc(u"ش.")},.day={tsc(u"یکشنبه"),tsc(u"دوشنبه"),tsc(u"سه‌شنبه"),tsc(u"چارشنبه"),tsc(u"پنجشنبه"),tsc(u"جمعه"),tsc(u"شنبه")},.abmon={tsc(u"جنوري"),tsc(u"فبروري"),tsc(u"مارچ"),tsc(u"اپریل"),tsc(u"مۍ"),tsc(u"جون"),tsc(u"جولای"),tsc(u"اګست"),tsc(u"سپتمبر"),tsc(u"اکتوبر"),tsc(u"نومبر"),tsc(u"دسمبر")},.mon={tsc(u"جنوري"),tsc(u"فبروري"),tsc(u"مارچ"),tsc(u"اپریل"),tsc(u"مۍ"),tsc(u"جون"),tsc(u"جولای"),tsc(u"اګست"),tsc(u"سپتمبر"),tsc(u"اکتوبر"),tsc(u"نومبر"),tsc(u"دسمبر")},.d_t_fmt=tsc(u"%A د %Y د %B %e، %H:%M:%S"),.d_fmt=tsc(u"د %Y د %B %e"),.t_fmt=tsc(u"%H:%M:%S"),.t_fmt_ampm=tsc(u"‫%I:%M:%S %p‬"),.date_fmt=tsc(u"%A د %Y د %B %e، %Z %H:%M:%S"),.am_pm={tsc(u"غ.م."),tsc(u"غ.و.")},.week={7,19971130,1},.first_weekday=7,.first_workday=7,.cal_direction=3},.messages={.yesexpr=tsc(u"^[+1yYبf]"),.noexpr=tsc(u"^[-0nNخنo]"),.yesstr=tsc(u"هو"),.nostr=tsc(u"نه")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%A‒%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"93")},.name={.name_fmt=tsc(u"%s%t%p%t%g%t%m%t%f"),.name_gen=tsc(u""),.name_miss=tsc(u"بي بي"),.name_mr=tsc(u"ښاغلې"),.name_mrs=tsc(u"بي بي"),.name_ms=tsc(u"بي بي")},.address={.postal_fmt=tsc(u"%a%N%f%N%d%N%b%N%s %h %e %r%N%C-%z %T%N%c%N"),.country_name=tsc(u"افغانستان"),.country_post=tsc(u"AF"),.country_ab2=tsc(u"AF"),.country_ab3=tsc(u"AFG"),.country_num=4,.country_car=tsc(u"AFG"),.lang_name=tsc(u"پښتو"),.lang_ab=tsc(u"ps"),.lang_term=tsc(u"pus"),.lang_lib=tsc(u"pus")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Pashto locale for Afghanistan"),.source=tsc(U"Nasir Gulzade\t\t;\t\tfast_io"),.address=tsc(U"see e-mail.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(U"Nasir Gulzade\t\t;\t\tfast_io"),.email=tsc(U"nasirgulzade@hotmail.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Pashto"),.territory=tsc(U"Afghanistan"),.revision=tsc(U"0.2"),.date=tsc(U"2009-01-16")},.monetary={.int_curr_symbol=tsc(U"AFN "),.currency_symbol=tsc(U"؋"),.mon_decimal_point=tsc(U"٫"),.mon_thousands_sep=tsc(U"٬"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"٫"),.thousands_sep=tsc(U"٬"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"ی."),tsc(U"د."),tsc(U"س."),tsc(U"چ."),tsc(U"پ."),tsc(U"ج."),tsc(U"ش.")},.day={tsc(U"یکشنبه"),tsc(U"دوشنبه"),tsc(U"سه‌شنبه"),tsc(U"چارشنبه"),tsc(U"پنجشنبه"),tsc(U"جمعه"),tsc(U"شنبه")},.abmon={tsc(U"جنوري"),tsc(U"فبروري"),tsc(U"مارچ"),tsc(U"اپریل"),tsc(U"مۍ"),tsc(U"جون"),tsc(U"جولای"),tsc(U"اګست"),tsc(U"سپتمبر"),tsc(U"اکتوبر"),tsc(U"نومبر"),tsc(U"دسمبر")},.mon={tsc(U"جنوري"),tsc(U"فبروري"),tsc(U"مارچ"),tsc(U"اپریل"),tsc(U"مۍ"),tsc(U"جون"),tsc(U"جولای"),tsc(U"اګست"),tsc(U"سپتمبر"),tsc(U"اکتوبر"),tsc(U"نومبر"),tsc(U"دسمبر")},.d_t_fmt=tsc(U"%A د %Y د %B %e، %H:%M:%S"),.d_fmt=tsc(U"د %Y د %B %e"),.t_fmt=tsc(U"%H:%M:%S"),.t_fmt_ampm=tsc(U"‫%I:%M:%S %p‬"),.date_fmt=tsc(U"%A د %Y د %B %e، %Z %H:%M:%S"),.am_pm={tsc(U"غ.م."),tsc(U"غ.و.")},.week={7,19971130,1},.first_weekday=7,.first_workday=7,.cal_direction=3},.messages={.yesexpr=tsc(U"^[+1yYبf]"),.noexpr=tsc(U"^[-0nNخنo]"),.yesstr=tsc(U"هو"),.nostr=tsc(U"نه")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%A‒%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"93")},.name={.name_fmt=tsc(U"%s%t%p%t%g%t%m%t%f"),.name_gen=tsc(U""),.name_miss=tsc(U"بي بي"),.name_mr=tsc(U"ښاغلې"),.name_mrs=tsc(U"بي بي"),.name_ms=tsc(U"بي بي")},.address={.postal_fmt=tsc(U"%a%N%f%N%d%N%b%N%s %h %e %r%N%C-%z %T%N%c%N"),.country_name=tsc(U"افغانستان"),.country_post=tsc(U"AF"),.country_ab2=tsc(U"AF"),.country_ab3=tsc(U"AFG"),.country_num=4,.country_car=tsc(U"AFG"),.lang_name=tsc(U"پښتو"),.lang_ab=tsc(U"ps"),.lang_term=tsc(U"pus"),.lang_lib=tsc(U"pus")},.measurement={.measurement=1}};


}
}

#include"../main.h"