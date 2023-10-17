#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main (void)
{
	int counter = 0, item = 0;
	void *lib_ptr = NULL;
	float (*func_ptr[10])(float, float) = {NULL}, var_a = 0, var_b = 0;
	char lib_name[16] = {'0'}, func_name[10][16] = {'0'} = {'0'}, menu_item[10][16] = {'0'};

	return 0;
}
