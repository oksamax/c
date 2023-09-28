#include <stdio.h>

#define ONE 0
#define TWO ONE+1
#define PRINT "TEST\nONE = %d  TWO = %d\n"

#define ABS(a) (a) < 0 ? -(a) : (a)

int main(void)
{
	printf(PRINT, ONE, TWO);

	printf("Absolute value (-1) = %d\nAbsolute value (1) = %d\n", ABS(-1), ABS(1));

#if ONE == 1
	printf("ONE\n");
#elif TWO > 2
	printf("TWO\n");
#else
	printf("default\n");
#endif


#undef ONE

#ifndef ONE
	printf("ONE\n");

#endif

#line 1000 "testik"

	printf("\nLINE = %d    FILE = %s    DATE = %s    TIME = %s   FUNC = %s\n",__LINE__,__FILE__,__DATE__,__TIME__,__func__);


	return 0;
}
