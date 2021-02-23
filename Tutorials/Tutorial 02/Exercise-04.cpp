// Exercise 4 - Functions

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
    int n, r;
    std::cout << "Enter a value for n ";
    std::cin >> n;
    std::cout << "Enter a value for r ";
    std::cin >> r;

    std::cout << "nCr = ";
    std::cout << nCr(n,r);
    std::cout << std::endl;
}

long Factorial(int no) {
    long fac = 1;
    
    for (int r = no; r >= 1; r--) {
        fac = fac * r;
    }
    
    return fac;
}

long nCr(int n, int r) {
    long NCR = 0;
    NCR = Factorial(n) / (Factorial(r) * Factorial((n - r)));

    return NCR;
}