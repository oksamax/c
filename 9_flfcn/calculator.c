#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>

int main (void)
{
	int counter = 0, item = 0, i = 0;
	void *lib_ptr = NULL;
	float (*func_ptr[10])(float, float) = {NULL}, var_a = 0, var_b = 0;
	char lib_name[16] = {'0'}, func_name[10][16] = {'0'}, item_name[11][16] = {'0'};

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
		scanf("%s",item_name[10]);
	} while(strlen(item_name[10]) > 16);



	do {
		if (10 == counter) {
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
				do {
					printf("Enter the name function:");
					scanf("%s", func_name[counter]);
				} while (strlen(func_name[counter]) > 16);

				func_ptr[counter] = dlsym(lib_ptr, func_name[counter]);

				if (NULL == func_ptr[counter]) puts("There isn't such function!\n");

			} while (NULL == func_ptr[counter]);
			counter++;
		}
		
		else if (item != 2) printf("This item is not in the menu!!!\n");

		puts("\n");

	} while (item != 2); 

	do {
		printf("***%s***\n   Menu:\n",item_name[10]);

		for(i = 0; i < counter; i++){
			printf("   %d.%s", i+1, item_name[counter]);
		}
		printf("   %d.Exit", counter);
		printf("Enter the item:");
		scanf("%d", &item);

		if ((item < counter)&&(item > 0)){
			item--;
			printf("\nEnter first number:");
			scanf("%f", &var_a);
			printf("\nEnter second number:");
			scanf("%f", &var_b);
			printf("Result = %.2f\n", (*func_ptr[item])(ivar_a, var_b));
		}
		else if (item != counter) printf("This item is not in the menu!!!\n");
		
		puts("\n");

	} while (item != counter);

	dlclose(lib_ptr);

	return 0;
}
