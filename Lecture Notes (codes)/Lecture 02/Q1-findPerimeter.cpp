// calculate perimeter of rectangle with 2 decimal places

#include <iostream>
#include<iomanip>

int main (void) {

    float length, width, perimeter = 0;

    std::cout << "Enter Length : ";
    std::cin >> length;
    std::cout << "Enter Width : ";
    std::cin >> width;

    perimeter = 2 * (length + width);

    std::cout << "Perimeter = "<< std::fixed << std::setprecision(2) << perimeter << std::endl;

    return 0;
}