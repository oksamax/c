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
	int counter = 0, find_or_delete_counter = 0, i = 0;
	float item = 0;
	char find_or_delete_name[12] = {0};

	do{
		puts("***Telephone directory***\n     Menu:\n   1.Add user\n   2.List of users\n   3.Find user\n   4.Delete user\n   5.Exit\n\n");
		printf("Enter the item:");
		scanf("%f",&item);

		if(1 == item){
			if (counter !=10){
				do {
					printf("Enter first name (from 1 to 12 characters):");
					scanf("%s",user[counter].first_name);
				} while (strlen(user[counter].first_name) > 12);
				
				do { 
					printf("Enter second name (from 1 to 12 characters):");
					scanf("%s",user[counter].second_name);
				} while (strlen(user[counter].second_name) > 12);

				do {
					printf("Enter number (from 1 to 12 characters):");
					scanf("%s",user[counter].number);
				} while (strlen(user[counter].number) > 12);

				counter++;
			}
			else puts("List if full!!!");
		}

		else if (2 == item){
			if (0 == counter) puts("List is empty!!!");			
			else {
				for(i = 0; i < counter; i++){
					printf("%2d.First name: %-12s  Second name: %-12s  Number: %-12s\n", i+1, user[i].first_name, user[i].second_name, user[i].number);
				}
			}
		}

		else if (3 == item){
			if (0 == counter) puts("List is empty!!!");
			else {
				do {
					printf("Enter the first name:");
					scanf("%s", find_or_delete_name);
				} while (strlen(find_or_delete_name) > 12);

				for(i = 0; i < counter; i++){
					if (!strcmp(user[i].first_name, find_or_delete_name)) {
						printf("%2d.First name: %-12s Second name: %-12s Number: %-12s\n", i+1, user[i].first_name, user[i].second_name, user[i].number);
						find_or_delete_counter++;
					}
				}
				
				if (0 == find_or_delete_counter) puts("This first name is not on the list!!!");
				find_or_delete_counter^find_or_delete_counter;
			}
		}

		else if (4 == item){
			if(0 == counter) puts("List is empty!!!");
			else {
				do {
					printf("Enter the first name:");
					scanf("%s",find_or_delete_name);
				} while (strlen(find_or_delete_name) > 12);

				for(i = 0; i < counter; i++) {
					if(!strcmp(find_or_delete_name, user[i].first_name)) {
						printf("Delete user %s\n",user[i].first_name);
						strcpy(user[i].first_name,user[counter-1].first_name);
						strcpy(user[i].second_name,user[counter-1].second_name);
						strcpy(user[i].number,user[counter-1].number);
						counter--;
						find_or_delete_counter++;
					}
				}
				if(0 == find_or_delete_counter) puts("This first name is not on the list!!!");
				find_or_delete_counter^find_or_delete_counter;
			}

		}

		else if (item != 5){
			puts("This item is not in the menu!!!");
		}
		puts("\n");
	} while(item != 5);

	return 0;
}	
