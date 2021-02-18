// Exercise 2 - Selection

#include<stdio.h>

int main() {

    float distance, amount;
    int rate;

    printf("Distance : ");
    scanf("%f", &distance);
    
    if (distance <= 30) {
        amount = distance * 50;
    }
    else if (distance > 30) {
        amount = ((distance - 30) * 40) + 1500;
    }

    printf("Amount = %.2f", amount);

    return 0;
}