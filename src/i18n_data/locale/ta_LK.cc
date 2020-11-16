#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3};

inline constexpr std::size_t numeric_grouping_storage[]{3,2};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Tamil language locale for Sri Lanka"),.source=tsc("J.Yogaraj\t\t;\t\tfast_io"),.address=tsc("30/36Q -2/1,Charles Apartments, De Silva Cross Rd, Kalubowila, Dehiwela, SriLanka.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc("94-777-315206\t\t;\t\tfast_io"),.email=tsc("yogaraj.ubuntu@gmail.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Tamil"),.territory=tsc("Sri Lanka"),.revision=tsc("1.0"),.date=tsc("2011,August,11")},.monetary={.int_curr_symbol=tsc("LKR "),.currency_symbol=tsc("රු"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc("ஞா"),tsc("தி"),tsc("செ"),tsc("பு"),tsc("வி"),tsc("வெ"),tsc("ச")},.day={tsc("ஞாயிறு"),tsc("திங்கள்"),tsc("செவ்வாய்"),tsc("புதன்"),tsc("வியாழன்"),tsc("வெள்ளி"),tsc("சனி")},.abmon={tsc("ஜன"),tsc("பிப்"),tsc("மார்"),tsc("ஏப்"),tsc("மே"),tsc("ஜூன்"),tsc("ஜூலை"),tsc("ஆக"),tsc("செப்"),tsc("அக்"),tsc("நவ"),tsc("டிச")},.mon={tsc("ஜனவரி"),tsc("பிப்ரவரி"),tsc("மார்ச்"),tsc("ஏப்ரல்"),tsc("மே"),tsc("ஜூன்"),tsc("ஜூலை"),tsc("ஆகஸ்ட்"),tsc("செப்டம்பர்"),tsc("அக்டோபர்"),tsc("நவம்பர்"),tsc("டிசம்பர்")},.d_t_fmt=tsc("%A %d %B %Y %H:%M:%S"),.d_fmt=tsc("%-d//%-m//%y"),.t_fmt=tsc("%H:%M:%S %Z"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%A %d %B %Y %H:%M:%S %Z"),.am_pm={tsc("காலை"),tsc("மாலை")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYஆ]"),.noexpr=tsc("^[-0nNஇ]"),.yesstr=tsc("ஆம்"),.nostr=tsc("இல்லை")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c (%a) %l"),.tel_dom_fmt=tsc("(%a) %l"),.int_select=tsc("00"),.int_prefix=tsc("94")},.name={.name_fmt=tsc("%p%t%f%t%g"),.name_gen=tsc(""),.name_miss=tsc("செல்வி"),.name_mr=tsc("திரு"),.name_mrs=tsc("திருமதி"),.name_ms=tsc("Ms.")},.address={.postal_fmt=tsc("%z%c%T%s%b%e%r"),.country_name=tsc("இலங்கை"),.country_ab2=tsc("LK"),.country_ab3=tsc("LKA"),.country_num=144,.country_car=tsc("CL"),.lang_name=tsc("தமிழ்"),.lang_ab=tsc("ta"),.lang_term=tsc("tam"),.lang_lib=tsc("tam")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Tamil language locale for Sri Lanka"),.source=tsc(L"J.Yogaraj\t\t;\t\tfast_io"),.address=tsc(L"30/36Q -2/1,Charles Apartments, De Silva Cross Rd, Kalubowila, Dehiwela, SriLanka.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(L"94-777-315206\t\t;\t\tfast_io"),.email=tsc(L"yogaraj.ubuntu@gmail.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Tamil"),.territory=tsc(L"Sri Lanka"),.revision=tsc(L"1.0"),.date=tsc(L"2011,August,11")},.monetary={.int_curr_symbol=tsc(L"LKR "),.currency_symbol=tsc(L"රු"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(L"ஞா"),tsc(L"தி"),tsc(L"செ"),tsc(L"பு"),tsc(L"வி"),tsc(L"வெ"),tsc(L"ச")},.day={tsc(L"ஞாயிறு"),tsc(L"திங்கள்"),tsc(L"செவ்வாய்"),tsc(L"புதன்"),tsc(L"வியாழன்"),tsc(L"வெள்ளி"),tsc(L"சனி")},.abmon={tsc(L"ஜன"),tsc(L"பிப்"),tsc(L"மார்"),tsc(L"ஏப்"),tsc(L"மே"),tsc(L"ஜூன்"),tsc(L"ஜூலை"),tsc(L"ஆக"),tsc(L"செப்"),tsc(L"அக்"),tsc(L"நவ"),tsc(L"டிச")},.mon={tsc(L"ஜனவரி"),tsc(L"பிப்ரவரி"),tsc(L"மார்ச்"),tsc(L"ஏப்ரல்"),tsc(L"மே"),tsc(L"ஜூன்"),tsc(L"ஜூலை"),tsc(L"ஆகஸ்ட்"),tsc(L"செப்டம்பர்"),tsc(L"அக்டோபர்"),tsc(L"நவம்பர்"),tsc(L"டிசம்பர்")},.d_t_fmt=tsc(L"%A %d %B %Y %H:%M:%S"),.d_fmt=tsc(L"%-d//%-m//%y"),.t_fmt=tsc(L"%H:%M:%S %Z"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%A %d %B %Y %H:%M:%S %Z"),.am_pm={tsc(L"காலை"),tsc(L"மாலை")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYஆ]"),.noexpr=tsc(L"^[-0nNஇ]"),.yesstr=tsc(L"ஆம்"),.nostr=tsc(L"இல்லை")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c (%a) %l"),.tel_dom_fmt=tsc(L"(%a) %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"94")},.name={.name_fmt=tsc(L"%p%t%f%t%g"),.name_gen=tsc(L""),.name_miss=tsc(L"செல்வி"),.name_mr=tsc(L"திரு"),.name_mrs=tsc(L"திருமதி"),.name_ms=tsc(L"Ms.")},.address={.postal_fmt=tsc(L"%z%c%T%s%b%e%r"),.country_name=tsc(L"இலங்கை"),.country_ab2=tsc(L"LK"),.country_ab3=tsc(L"LKA"),.country_num=144,.country_car=tsc(L"CL"),.lang_name=tsc(L"தமிழ்"),.lang_ab=tsc(L"ta"),.lang_term=tsc(L"tam"),.lang_lib=tsc(L"tam")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Tamil language locale for Sri Lanka"),.source=tsc(u8"J.Yogaraj\t\t;\t\tfast_io"),.address=tsc(u8"30/36Q -2/1,Charles Apartments, De Silva Cross Rd, Kalubowila, Dehiwela, SriLanka.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u8"94-777-315206\t\t;\t\tfast_io"),.email=tsc(u8"yogaraj.ubuntu@gmail.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Tamil"),.territory=tsc(u8"Sri Lanka"),.revision=tsc(u8"1.0"),.date=tsc(u8"2011,August,11")},.monetary={.int_curr_symbol=tsc(u8"LKR "),.currency_symbol=tsc(u8"රු"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u8"ஞா"),tsc(u8"தி"),tsc(u8"செ"),tsc(u8"பு"),tsc(u8"வி"),tsc(u8"வெ"),tsc(u8"ச")},.day={tsc(u8"ஞாயிறு"),tsc(u8"திங்கள்"),tsc(u8"செவ்வாய்"),tsc(u8"புதன்"),tsc(u8"வியாழன்"),tsc(u8"வெள்ளி"),tsc(u8"சனி")},.abmon={tsc(u8"ஜன"),tsc(u8"பிப்"),tsc(u8"மார்"),tsc(u8"ஏப்"),tsc(u8"மே"),tsc(u8"ஜூன்"),tsc(u8"ஜூலை"),tsc(u8"ஆக"),tsc(u8"செப்"),tsc(u8"அக்"),tsc(u8"நவ"),tsc(u8"டிச")},.mon={tsc(u8"ஜனவரி"),tsc(u8"பிப்ரவரி"),tsc(u8"மார்ச்"),tsc(u8"ஏப்ரல்"),tsc(u8"மே"),tsc(u8"ஜூன்"),tsc(u8"ஜூலை"),tsc(u8"ஆகஸ்ட்"),tsc(u8"செப்டம்பர்"),tsc(u8"அக்டோபர்"),tsc(u8"நவம்பர்"),tsc(u8"டிசம்பர்")},.d_t_fmt=tsc(u8"%A %d %B %Y %H:%M:%S"),.d_fmt=tsc(u8"%-d//%-m//%y"),.t_fmt=tsc(u8"%H:%M:%S %Z"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%A %d %B %Y %H:%M:%S %Z"),.am_pm={tsc(u8"காலை"),tsc(u8"மாலை")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYஆ]"),.noexpr=tsc(u8"^[-0nNஇ]"),.yesstr=tsc(u8"ஆம்"),.nostr=tsc(u8"இல்லை")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c (%a) %l"),.tel_dom_fmt=tsc(u8"(%a) %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"94")},.name={.name_fmt=tsc(u8"%p%t%f%t%g"),.name_gen=tsc(u8""),.name_miss=tsc(u8"செல்வி"),.name_mr=tsc(u8"திரு"),.name_mrs=tsc(u8"திருமதி"),.name_ms=tsc(u8"Ms.")},.address={.postal_fmt=tsc(u8"%z%c%T%s%b%e%r"),.country_name=tsc(u8"இலங்கை"),.country_ab2=tsc(u8"LK"),.country_ab3=tsc(u8"LKA"),.country_num=144,.country_car=tsc(u8"CL"),.lang_name=tsc(u8"தமிழ்"),.lang_ab=tsc(u8"ta"),.lang_term=tsc(u8"tam"),.lang_lib=tsc(u8"tam")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Tamil language locale for Sri Lanka"),.source=tsc(u"J.Yogaraj\t\t;\t\tfast_io"),.address=tsc(u"30/36Q -2/1,Charles Apartments, De Silva Cross Rd, Kalubowila, Dehiwela, SriLanka.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u"94-777-315206\t\t;\t\tfast_io"),.email=tsc(u"yogaraj.ubuntu@gmail.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Tamil"),.territory=tsc(u"Sri Lanka"),.revision=tsc(u"1.0"),.date=tsc(u"2011,August,11")},.monetary={.int_curr_symbol=tsc(u"LKR "),.currency_symbol=tsc(u"රු"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u"ஞா"),tsc(u"தி"),tsc(u"செ"),tsc(u"பு"),tsc(u"வி"),tsc(u"வெ"),tsc(u"ச")},.day={tsc(u"ஞாயிறு"),tsc(u"திங்கள்"),tsc(u"செவ்வாய்"),tsc(u"புதன்"),tsc(u"வியாழன்"),tsc(u"வெள்ளி"),tsc(u"சனி")},.abmon={tsc(u"ஜன"),tsc(u"பிப்"),tsc(u"மார்"),tsc(u"ஏப்"),tsc(u"மே"),tsc(u"ஜூன்"),tsc(u"ஜூலை"),tsc(u"ஆக"),tsc(u"செப்"),tsc(u"அக்"),tsc(u"நவ"),tsc(u"டிச")},.mon={tsc(u"ஜனவரி"),tsc(u"பிப்ரவரி"),tsc(u"மார்ச்"),tsc(u"ஏப்ரல்"),tsc(u"மே"),tsc(u"ஜூன்"),tsc(u"ஜூலை"),tsc(u"ஆகஸ்ட்"),tsc(u"செப்டம்பர்"),tsc(u"அக்டோபர்"),tsc(u"நவம்பர்"),tsc(u"டிசம்பர்")},.d_t_fmt=tsc(u"%A %d %B %Y %H:%M:%S"),.d_fmt=tsc(u"%-d//%-m//%y"),.t_fmt=tsc(u"%H:%M:%S %Z"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%A %d %B %Y %H:%M:%S %Z"),.am_pm={tsc(u"காலை"),tsc(u"மாலை")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYஆ]"),.noexpr=tsc(u"^[-0nNஇ]"),.yesstr=tsc(u"ஆம்"),.nostr=tsc(u"இல்லை")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c (%a) %l"),.tel_dom_fmt=tsc(u"(%a) %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"94")},.name={.name_fmt=tsc(u"%p%t%f%t%g"),.name_gen=tsc(u""),.name_miss=tsc(u"செல்வி"),.name_mr=tsc(u"திரு"),.name_mrs=tsc(u"திருமதி"),.name_ms=tsc(u"Ms.")},.address={.postal_fmt=tsc(u"%z%c%T%s%b%e%r"),.country_name=tsc(u"இலங்கை"),.country_ab2=tsc(u"LK"),.country_ab3=tsc(u"LKA"),.country_num=144,.country_car=tsc(u"CL"),.lang_name=tsc(u"தமிழ்"),.lang_ab=tsc(u"ta"),.lang_term=tsc(u"tam"),.lang_lib=tsc(u"tam")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Tamil language locale for Sri Lanka"),.source=tsc(U"J.Yogaraj\t\t;\t\tfast_io"),.address=tsc(U"30/36Q -2/1,Charles Apartments, De Silva Cross Rd, Kalubowila, Dehiwela, SriLanka.\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(U"94-777-315206\t\t;\t\tfast_io"),.email=tsc(U"yogaraj.ubuntu@gmail.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Tamil"),.territory=tsc(U"Sri Lanka"),.revision=tsc(U"1.0"),.date=tsc(U"2011,August,11")},.monetary={.int_curr_symbol=tsc(U"LKR "),.currency_symbol=tsc(U"රු"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(U"ஞா"),tsc(U"தி"),tsc(U"செ"),tsc(U"பு"),tsc(U"வி"),tsc(U"வெ"),tsc(U"ச")},.day={tsc(U"ஞாயிறு"),tsc(U"திங்கள்"),tsc(U"செவ்வாய்"),tsc(U"புதன்"),tsc(U"வியாழன்"),tsc(U"வெள்ளி"),tsc(U"சனி")},.abmon={tsc(U"ஜன"),tsc(U"பிப்"),tsc(U"மார்"),tsc(U"ஏப்"),tsc(U"மே"),tsc(U"ஜூன்"),tsc(U"ஜூலை"),tsc(U"ஆக"),tsc(U"செப்"),tsc(U"அக்"),tsc(U"நவ"),tsc(U"டிச")},.mon={tsc(U"ஜனவரி"),tsc(U"பிப்ரவரி"),tsc(U"மார்ச்"),tsc(U"ஏப்ரல்"),tsc(U"மே"),tsc(U"ஜூன்"),tsc(U"ஜூலை"),tsc(U"ஆகஸ்ட்"),tsc(U"செப்டம்பர்"),tsc(U"அக்டோபர்"),tsc(U"நவம்பர்"),tsc(U"டிசம்பர்")},.d_t_fmt=tsc(U"%A %d %B %Y %H:%M:%S"),.d_fmt=tsc(U"%-d//%-m//%y"),.t_fmt=tsc(U"%H:%M:%S %Z"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%A %d %B %Y %H:%M:%S %Z"),.am_pm={tsc(U"காலை"),tsc(U"மாலை")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYஆ]"),.noexpr=tsc(U"^[-0nNஇ]"),.yesstr=tsc(U"ஆம்"),.nostr=tsc(U"இல்லை")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c (%a) %l"),.tel_dom_fmt=tsc(U"(%a) %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"94")},.name={.name_fmt=tsc(U"%p%t%f%t%g"),.name_gen=tsc(U""),.name_miss=tsc(U"செல்வி"),.name_mr=tsc(U"திரு"),.name_mrs=tsc(U"திருமதி"),.name_ms=tsc(U"Ms.")},.address={.postal_fmt=tsc(U"%z%c%T%s%b%e%r"),.country_name=tsc(U"இலங்கை"),.country_ab2=tsc(U"LK"),.country_ab3=tsc(U"LKA"),.country_num=144,.country_car=tsc(U"CL"),.lang_name=tsc(U"தமிழ்"),.lang_ab=tsc(U"ta"),.lang_term=tsc(U"tam"),.lang_lib=tsc(U"tam")},.measurement={.measurement=1}};


}
}

#include"../main.h"