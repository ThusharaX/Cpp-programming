// Exercise 4
//Coded by using C language

#include <stdio.h>

int Square(int);
int Cube(int);

int main()
{
	int number;
	
	printf("Number : ");
	scanf("%d", &number);
	
	printf("\nSquare : %d\n", Square(number));
	printf("Cube : %d\n", Cube(number));
	
	return 0;
}

int Square(int x) {
	return x * x;
}

int Cube(int x) {
	return x * x * x;
}
