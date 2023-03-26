// coding with C

#include <stdio.h>

int main() {
    float cm, inches;

    printf("Enter length as cm : ");
    scanf("%f", &cm);

    // calculation
    inches = cm / 2.54;

    printf("Length is : %.2f inches", inches);

    return 0;
}