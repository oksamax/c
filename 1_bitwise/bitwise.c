#include <stdio.h>

int main(void)
{
	int var_a = 0xAB77DF67;
	int byte = 0;

	printf("Variable a = %X\n",var_a);
	printf("first byte of a = %X\n",(0xFF&var_a));
	printf("second byte of a = %X\n",((var_a>>8)&0xFF));
	printf("third byte of a = %X\n",((var_a>>16)&0xFF));
	printf("fourth byte of a = %X\n",((var_a>>24)&0xFF));

	printf("\nChange third byte. Please, write a byte (hex):\n");
	scanf("%x",&byte);
	printf("a = %X\n",((var_a&0xFF00FFFF)|(byte<<16)));

	return 0;
}
