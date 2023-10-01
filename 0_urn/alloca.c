#include <alloca.h>
#include <stdio.h>

int main(void)
{
	long int *ptr1 = NULL, *ptr2 = NULL;

	ptr1 = alloca(2*sizeof(long));
	ptr2 = alloca(2*sizeof(long));
	
	*ptr1 = 1;
	*(ptr1+1) = 2;
	*ptr2 = 3;
	*(ptr2+1) = 4;

	return 0;
}
