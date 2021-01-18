// calculate the discount

#include<iostream>
#include<iomanip>

int main (void) {

    float totalPrice;
    float discount = 0;

    std::cout << "Enter Total Price : ";
    std::cin >> totalPrice;

    if (totalPrice > 10000) {
        discount = totalPrice * 25 / 100;
    }
    else if (totalPrice <= 10000 && totalPrice > 5000) {
        discount = totalPrice * 15 / 100;
    }
    else if (totalPrice <= 5000 && totalPrice > 3000) {
        discount = totalPrice * 10 / 100;
    }

    std::cout << "Discount = " << std::fixed << std::setprecision(2) << discount << std::endl;

    return 0;
}