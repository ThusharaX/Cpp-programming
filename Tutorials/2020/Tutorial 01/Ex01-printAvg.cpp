// Exercise 1 - Calculations

#include<stdio.h>

int main() {
    
    float sub1, sub2, avg;
	
	printf("Enter Marks\n");
    printf("\tSubject 1 : ");
    scanf("%f", &sub1);
    printf("\tSubject 2 : ");
    scanf("%f", &sub2);

    avg = (sub1 + sub2) / 2;

    printf("Average marks = %.2f", avg);
    
    return 0;
}