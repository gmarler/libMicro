#ifndef _LIBRT_
#define _LIBRT_

clock_gettime	"clock_gettime"	-B 400000

clock_nanosleep	"clock_nanosleep"	-B 1500
clock_nanosleep	"clock_nanosleep_s"	-B 1500	-s
clock_nanosleep	"clock_nanosleep_r"	-B 1500	-r
clock_nanosleep	"clock_nanosleep_rs"	-B 1500	-s	-r

clock_nanosleep	"clock_nanosleep"	-B 1500	-m
clock_nanosleep	"clock_nanosleep_s"	-B 1500	-m	-s
clock_nanosleep	"clock_nanosleep_r"	-B 1500	-m	-r
clock_nanosleep	"clock_nanosleep_rs"	-B 1500	-m	-s	-r

clock_nanosleep	"clock_nanosleepT4"	-B 1500	-T 4
clock_nanosleep	"clock_nanosleepT4_s"	-B 1500	-T 4	-s
clock_nanosleep	"clock_nanosleepT4"	-B 1500	-T 4	-r
clock_nanosleep	"clock_nanosleepT4_s"	-B 1500	-T 4	-s	-r

clock_nanosleep	"clock_nanosleepT4"	-B 1500	-T 4	-m
clock_nanosleep	"clock_nanosleepT4_s"	-B 1500	-T 4	-m	-s
clock_nanosleep	"clock_nanosleepT4"	-B 1500	-T 4	-m	-r
clock_nanosleep	"clock_nanosleepT4_s"	-B 1500	-T 4	-m	-s	-r

clock_nanosleep	"clock_nanosleep_d10"	-B 1500	-d 10
clock_nanosleep	"clock_nanosleep_d100"	-B 1500	-d 100
clock_nanosleep	"clock_nanosleep_d1000"	-B 1500	-d 1000
clock_nanosleep	"clock_nanosleep_d10000"	-B 1000	-d 10000
clock_nanosleep	"clock_nanosleep_d100000"	-B 1000	-d 100000

#endif /* _LIBRT_ */
