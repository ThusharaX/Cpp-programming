// coding with C

#include <stdio.h>

int main() {
    int num;
    int i; // counter variable

    printf("Enter number : ");
    scanf("%d", &num);

    for (i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}