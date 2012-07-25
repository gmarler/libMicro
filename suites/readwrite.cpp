#ifndef _READWRITE_
#define _READWRITE_

read	"read_t1k"	-s 1k	-f $TFILE	-B 80k
read	"read_t10k"	-s 10k	-f $TFILE	-B 40k
read	"read_t100k"	-s 100k	-f $TFILE	-B 5k

read	"read_u1k"	-s 1k	-f $VFILE	-B 150k
read	"read_u10k"	-s 10k	-f $VFILE	-B 40k
read	"read_u100k"	-s 100k	-f $VFILE	-B 5k

read	"read_z1k"	-s 1k	-f /dev/zero	-B 300k
read	"read_z10k"	-s 10k	-f /dev/zero	-B 70k	
read	"read_z100k"	-s 100k	-f /dev/zero	-B 8k	
read	"read_zw100k"	-s 100k	-w	-f /dev/zero	-B 8k	

write	"write_t1k"	-s 1k	-f $TFILE	-B 80k	
write	"write_t10k"	-s 10k	-f $TFILE	-B 20k	
write	"write_t100k"	-s 100k	-f $TFILE	-B 1k	

write	"write_u1k"	-s 1k	-f $VFILE	-B 80k	
write	"write_u10k"	-s 10k	-f $VFILE	-B 20k	
write	"write_u100k"	-s 100k	-f $VFILE	-B 1k	

write	"write_n1k"	-s 1k	-f /dev/null	-B 500k	
write	"write_n10k"	-s 10k	-f /dev/null	-B 500k	
write	"write_n100k"	-s 100k	-f /dev/null	-B 500k	

writev	"writev_t1k"	-s 1k	-f $TFILE	-B 20k	
writev	"writev_t10k"	-s 10k	-f $TFILE	-B 1k	
writev	"writev_t100k"	-s 100k	-f $TFILE	-B 200	

writev	"writev_u1k"	-s 1k	-f $VFILE	-B 20k	
writev	"writev_u10k"	-s 10k	-f $VFILE	-B 1k	
writev	"writev_u100k"	-s 100k	-f $VFILE	-B 200	
	
writev	"writev_n1k"	-s 1k	-f /dev/null	-B 200k	
writev	"writev_n10k"	-s 10k	-f /dev/null	-B 200k	
writev	"writev_n100k"	-s 100k	-f /dev/null	-B 200k	

pread	"pread_t1k"	-s 1k	-f $TFILE
pread	"pread_t10k"	-s 10k	-f $TFILE
pread	"pread_t100k"	-s 100k	-f $TFILE	-B 10k

pread	"pread_u1k"	-s 1k	-f $VFILE
pread	"pread_u10k"	-s 10k	-f $VFILE
pread	"pread_u100k"	-s 100k	-f $VFILE	-B 10k

pread	"pread_z1k"	-s 1k	-f /dev/zero
pread	"pread_z10k"	-s 10k	-f /dev/zero
pread	"pread_z100k"	-s 100k	-f /dev/zero	-B 10k
pread	"pread_zw100k"	-s 100k	-w	-f /dev/zero	-B 10k

pwrite	"pwrite_t1k"	-s 1k	-f $TFILE
pwrite	"pwrite_t10k"	-s 10k	-f $TFILE	-B 10k
pwrite	"pwrite_t100k"	-s 100k	-f $TFILE	-B 8k

pwrite	"pwrite_u1k"	-s 1k	-f $VFILE
pwrite	"pwrite_u10k"	-s 10k	-f $VFILE	-B 10k
pwrite	"pwrite_u100k"	-s 100k	-f $VFILE	-B 8k

pwrite	"pwrite_n1k"	-s 1k	-f /dev/null	-B 500k
pwrite	"pwrite_n10k"	-s 10k	-f /dev/null	-B 500k
pwrite	"pwrite_n100k"	-s 100k	-f /dev/null	-B 500k

#endif /* _READWRITE_ */
