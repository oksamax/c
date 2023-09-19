#include <stdio.h>

int main(void)
{
	int var_a = 0xAB88C9F1, byte = 0;
	char *ptr = NULL;

	ptr = &var_a;

	printf("Variable a = %X\n", var_a);
	printf("First byte of a = %X\n", (*ptr)&0xFF);
	printf("Second byte of a = %X\n", *(ptr+1)&0xFF);
	printf("Third byte of a = %X\n", *(ptr+2)&0xFF);
	printf("Fourth byte of a = %X\n", *(ptr+3)&0xFF);

	printf("\nChange third byte. Please, write a byte (hex):");
	scanf("%x",&byte);
	*(ptr+2) = byte;
	printf("a = %X\n",var_a);

	return 0;
}
