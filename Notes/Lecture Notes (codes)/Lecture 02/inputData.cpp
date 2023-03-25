#include <iostream>

int main (void) {

    int num;
    
    std::cout << "Input Number : ";
    std::cin >> num;
    std::cout << "Number is : " << num << std::endl;


    // input data in to two variables in same time
    int x, y;

    std::cin >> x >> y;
    std::cout << "X : " << x << std::endl;
    std::cout << "Y : " << y << std::endl;

    return 0;
}