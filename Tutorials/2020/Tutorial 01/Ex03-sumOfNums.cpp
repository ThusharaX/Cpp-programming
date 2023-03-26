// Exercise 3 - Repetition

#include<stdio.h>

int main() {

    int number, sumOfNums = 0;
    int i;

    printf("Number : ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        sumOfNums += i;
    }

    printf("Sum of 1 to %d = %d", number, sumOfNums);

    return 0;
}