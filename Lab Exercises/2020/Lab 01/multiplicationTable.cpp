// Exercise 3
//Coded by using C language

#include <stdio.h>

int main()
{
	int number;
	int i;
	
	printf("Enter Number : ");
	scanf("%d", &number);

	printf("\nMultiplication Table\n\n");
	for (i = 1; i <= 12; i++) {
		printf("%d x %d = %d\n", number, i, number*i);
	}

	return 0;
}
