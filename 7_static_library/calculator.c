#include "calc.h"
#include <stdio.h>

int main(void)
{
	int var_a = 0, var_b = 0, item = 0, result = 0;

	do {
		printf("***Calculator***\n Menu:\n  1.Additional\n  2.Subtraction\n  3.Multiplication\n  4.Division\n  5.Exit\n\nEnter the item: ");
		scanf("%d", &item);

		if (1 == item) {
			printf("\nEnter the first number:");
			scanf("%d", &var_a);
			printf("Enter the second number:");
			scanf("%d", &var_b);
			result = add(var_a, var_b);
			printf("Result = %d\n", result);
		}
		else if (2 == item) {
			printf("\nEnter the first number:");
			scanf("%d", &var_a);
			printf("Enter the second number:");
			scanf("%d", &var_b);
			result = sub(var_a, var_b);
			printf("Result = %d\n", result);
		}
		else if (3 == item) {
			printf("\nEnter the first number:");
			scanf("%d", &var_a);
			printf("Enter the second number:");
			scanf("%d", &var_b);
			result = mul(var_a, var_b);
			printf("Result = %d\n", result);
		}
		else if (4 == item) {
			printf("\nEnter the first number:");
			scanf("%d", &var_a);
			printf("Enter the second number:");
			scanf("%d", &var_b);
			result = div(var_a, var_b);
			printf("Result = %d\n", result);
		}
		else if (item != 5) {
			puts("This item is not in the menu!!!");
		}

		printf("\n\n");

	} while (item != 5);

	return 0;
}	
