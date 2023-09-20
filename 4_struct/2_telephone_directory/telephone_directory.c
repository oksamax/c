#include <stdio.h>
#include <string.h>

struct user_information {
	char number[12];
	char first_name[12];
	char second_name[12];
};


int main(void)
{
	struct user_information user[10];
	int counter = 0, end_counter = 0, i = 0;
	float item = 0;
	char find_name[12] = {0};

	do{
		puts("***Telephone directory***\n     Menu:\n   1.Add user\n   2.List of users\n   3.Find user\n   4.Delete user\n   5.Exit\n\nEnter the item:");
		scanf("%f",&item);

		if(1 == item){
			if (counter !=10){
				do {
					puts("Enter first name (from 1 to 12 characters):");
					scanf("%s",user[counter].first_name);
				} while (strlen(user[counter].first_name) > 12);
				
				do { 
					puts("Enter second name (from 1 to 12 characters):");
					scanf("%s",user[counter].second_name);
				} while (strlen(user[counter].second_name) > 12);

				do {
					puts("Enter number (from 1 to 12 characters):");
					scanf("%s",user[counter].number);
				} while (strlen(user[counter].number) > 12);

				counter++;
			}
			else puts("List if full!!!\n");
		}

		else if (2 == item){
			if (0 == counter) puts("List is empty!!!\n");			
			else {
				for(i = 0; i < counter; i++){
					printf("%2d. First name: %-12s  Second name: %-12s  Number: %-12s\n",i+1 ,user[i].first_name, user[i].second_name, user[i].number);
				}
			}
		}

		else if (3 == item){
		}

		else if (4 == item){
		}

		else if (item != 5){
			puts("This item is not in the menu!!!\n");
		}
		puts("\n");
	} while(item != 5);

	return 0;
}	
