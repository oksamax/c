#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long *ptr = NULL;

	ptr = sbrk(16);

	if (ptr < 0) {
		printf("MEMORY ALLOCATION ERROR!!!\n");
		exit(EXIT_FAILURE);
	}

	*ptr = 10;
	*(ptr+1) = 12;
	
	printf("*ptr = %ld\n*(ptr+1) = %ld\n", *ptr, *(ptr+1));

	sbrk(-16);

	return 0;
}

