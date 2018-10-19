#if !defined _INC_benchmarks
	#define _INC_benchmarks
#else
	#endinput
#endif

#define MAX_TIME (10000000)
#define bm(%0,%1) new %1 = GetTickCount(); for(new %0 = 0; (%0) < MAX_TIME; ++(%0))
#define GetTotalS%0; (float((GetTickCount()-(%0)))/1000.0);
#define GetTotalMS%0; GetTickCount()-(%0);

