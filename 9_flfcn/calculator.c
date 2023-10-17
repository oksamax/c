#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>

int main (void)
{
	int counter = 0, item = 0;
	void *lib_ptr = NULL;
	float (*func_ptr[10])(float, float) = {NULL}, var_a = 0, var_b = 0;
	char lib_name[16] = {'0'}, func_name[10][16] = {'0'}, item_name[12][16] = {'0'};

	printf("Download the library. ");
	do {
		do {
			printf("Enter the library name (from 1 to 16 characters):");
			scanf("%s",lib_name);
		} while (strlen(lib_name) > 16);

		lib_ptr = dlopen(lib_name, RTLD_LAZY);
		if (NULL == lib_ptr) printf("Incorrect library name!!!\n");

	} while (NULL == lib_ptr);

	printf("\n***Create a program menu***\n");
	do {
		printf("Enter the program name (from 1 to 16 characters):");
		scanf("%s",item_name[11]);
	} while(strlen(item_name[11]) > 16);



	do {
		if (9 == counter) {
			printf("Menu is full!!!\n");
			break;
		}

		printf("Create a menu:\n 1.Add function\n2.Exit\n\nEnter the item:");
		scanf("%d", &item);

		if (1 == item) {
			do {
				printf("Enter name for %dth item of menu (from 1 to 16 characters):", counter + 1);
				scanf("%s", item_name[counter]);
			} while (strlen(item_name[counter]) > 16);

			do {

			}


		}

	} while (item != 2); 



	dlclose(lib_ptr);

	return 0;
}
