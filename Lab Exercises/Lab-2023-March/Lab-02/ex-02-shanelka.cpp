#include <iostream>

// create a structure
struct Rectangle {
    int length;
    int width;
};

// function prototype
int area(int length, int width);

// start the main function
int main() {
    Rectangle yard, house; // create variables with structure

    std::cout << "Enter length of yard : ";
    std::cin >> yard.length;
    std::cout << "Enter width of yard : ";
    std::cin >> yard.width;

    std::cout << "Enter length of house : ";
    std::cin >> house.length;
    std::cout << "Enter width of house : ";
    std::cin >> house.width;

    std::cout << "\nLawn area = " << area(yard.length, yard.width) - area(house.length, house.width) << std::endl;
    
    return 0;
}

// function definition
int area(int length, int width) {
    return length * width;
}