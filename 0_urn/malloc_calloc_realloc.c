#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr1 = NULL, *ptr2 = NULL;

	ptr1 = malloc(10*sizeof(int));
	if(0 == ptr1) {
		printf("MEMORY ALLOCATION ERROR!!!\n");
		exit(EXIT_FAILURE);
	}

	ptr2 = calloc(10, sizeof(int));
	if(0 == ptr2) {
		printf("MEMORY ALLOCATION ERROR!!!\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < 10; i++) {
		*(ptr1 + i) = i + 1;
		*(ptr2 + i) = i + 2;
		printf("%d  %d\n",*(ptr1 + i), *(ptr2 + i));
	}

	ptr1 = realloc(ptr1, 5*sizeof(int));
	if(0 == ptr1) {
		printf("MEMORY ALLOCATION ERROR!!!\n");
		exit(EXIT_FAILURE);
	}
	ptr2 = realloc(ptr2, 5*sizeof(int));
	if(0 == ptr2) {
		printf("MEMORY ALLOCATION ERROR!!!\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < 5; i++) {
		*(ptr1 + i) = i + 1;
		*(ptr2 + i) = i + 2;
		printf("%d  %d\n",*(ptr1 + i), *(ptr2 + i));
	}

	free(ptr1);
	free(ptr2);

	return 0;
}
