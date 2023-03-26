// Exercise 03

/* Write a C++ program to input the total price
   to be paid by a customer and calculate the
   discount according to the chart below.
*/

/* CONDITIONS
   >10000 -> 25%
   10000 - 5000 -> 15%
   5000 - 3000 -> 10%
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main (void) {

    // variable declaration
    float totalPrice;
    float discount = 0;
    int rate = 0;

    cout << "Enter Total Price : "; // prompt
    cin >> totalPrice;              // input Total Price

    // Checking CONDITIONS
    if (totalPrice > 10000) {
        rate = 25;
    }
    else if (totalPrice <= 10000 && totalPrice > 5000) {
        rate = 15;
    }
    else if (totalPrice <= 5000 && totalPrice > 3000) {
        rate = 10;
    }

    // calculate discount
    discount = totalPrice * rate / 100;

    // print discount
    cout << "Discount = " << fixed << setprecision(2) << discount << endl;

    return 0;
}