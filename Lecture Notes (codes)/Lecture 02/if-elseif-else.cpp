#include <iostream>

int main (void) {

    int a = 100, b = 200, c =300;

    if (a > b) {
        std::cout << "A > B" << std::endl;
    }
    else if (b > c) {
        std::cout << "B > C" << std::endl;
    }
    else {
        std::cout << "A < B < C" << std::endl;
    }

    return 0;
}