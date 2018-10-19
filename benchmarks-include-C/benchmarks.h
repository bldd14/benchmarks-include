#if !defined _benchmarks_included_
	#define _benchmarks_included_
#else
	#endinput
#endif

#include <time.h>

#define MAX_TIME (1000000000)
#define bm(n_iterate,n_time) clock_t n_time = clock(); for(unsigned int n_iterate = 0; n_iterate < MAX_TIME; ++n_iterate)
#define GetTotalS(n_time) ((clock()-n_time)/(double)1000)
#define GetTotalMS(n_time) (clock()-n_time)




