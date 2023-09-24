#include <stdio.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("I rember number ");
	do{
		printf(" please guess this number:");
		scanf("%d", &a);
		count ++;
		if ( a> number) {
			printf("too big");
		} else if ( a < number ) {
			printf("too little");
		}
	} while (a != number);
	printf("good,you use%d.\n", count);
	return 0;
}