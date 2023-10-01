#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int number = 0, user_number = 0, counter = 1;

	srand(time(NULL));

	number = rand()%99+1;

	printf("Guess the number from 1 to 100!\n\n");
	printf("Enter the number:");
	scanf("%d", &user_number);

	while(number != user_number) {
		(number > user_number)? printf("Your number is less!\n") : printf("Your number is more!\n");
		printf("\nEnter the number from 1 to 100:");
		scanf("%d", &user_number);
		counter++;
	}

	printf("\nYou guessed the number on the %dth try!!!\n", counter);

	return 0;
}
