#include <stdio.h>

enum status {RED, GREEN, YELLOW};
union type {
	char a;
	int b;
	float c;
};

int main(void)
{
	int PIN = 0;
	typedef union type ut;
	ut test;
	
	while(PIN < 3){
		switch(PIN){
			case RED:
				printf("DOWN\n");
				test.a = 'S';
				printf("char a = %c\n", test.a);
				break;
			case GREEN:
				printf("UP\n");
				test.b = 100;
				printf("int b = %d\n",test.b);
				break;
			case YELLOW:
				printf("Reset\n");
				test.c = 5.5;
				printf("float c = %.1f\n",test.c);
		}
		PIN++;
	}

	return 0;
}
