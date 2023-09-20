#include <stdio.h>

struct pack {
	char a;
	int b;
} __attribute__((packed));

struct nopack {
	char a;
	int b;
};

int main(void)
{
	struct pack *pack_ptr;
	struct nopack *nopack_ptr;
	char str[10] = {'A',0,0,0,0,'B',0,0,0,0};

	pack_ptr = (struct pack *)str;
	printf("packed\n");
	printf("a = %c; b = %d;\n", pack_ptr->a, pack_ptr->b);
	printf("a = %c; b = %d;\n\n", (pack_ptr+1)->a, (pack_ptr+1)->b);

	nopack_ptr = (struct nopack *)str;
	printf("no packed\n");
	printf("a = %c; b = %d;\n", nopack_ptr->a, nopack_ptr->b);
	printf("a = %c; b = %d;\n", (nopack_ptr+1)->a, (nopack_ptr+1)->b);


	return 0;
}

