// coding with C

#include <stdio.h>

int Square(int x);
int Cube(int x);

int main() {
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Square : %d\n", Square(num));
    printf("Cube : %d", Cube(num));

}

int Square(int x) {
    return x * x;
}

int Cube(int x) {
    return x * x * x;
}