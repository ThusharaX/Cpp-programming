// Exercise 2
//Coded by using C language

#include <stdio.h>

int main()
{
	float cm;
	float inch;

	printf("Input a length : ");
	scanf("%f", &cm);

	inch = cm / 2.54;
	
	printf("\nLength in inches : %f\n", inch);

	return 0;
}
