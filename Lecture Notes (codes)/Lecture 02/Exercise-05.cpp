// Exercise 05

/* • Modify the EX03 to input details of 3 customers and
    calculate the total discount amount given.
   • What would you do if you want to continue entering prices until -1 is entered ?
   • What would you do if you want to enter data until user enters
    ‘y’ to continue and ‘n’ to stop?
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main (void) {

    // variable declaration
    float totalPrice;
    float discount = 0, totalDiscount = 0;
    int rate = 0, count = 1;

//-------------------------------------------------------------------------

    // input details of 3 customers and calculate the total discount amount given.

    for (count = 1; count <= 3; count++) {
        cout << "Customer 0" << count << endl;

        cout << "\tEnter Total Price : "; // prompt
        cin >> totalPrice;                // input totalPrice

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

        // adding discount to totalDiscount
        totalDiscount += discount;
    }

//-------------------------------------------------------------------------


    // continue entering prices until -1 is entered

    // while (totalPrice != -1) {
    //     cout << "Customer 0" << count << endl;

    //     cout << "\tEnter Total Price : "; // prompt
    //     cin >> totalPrice;                // input totalPrice

    //     // Checking CONDITIONS
    //     if (totalPrice > 10000) {
    //         rate = 25;
    //     }
    //     else if (totalPrice <= 10000 && totalPrice > 5000) {
    //         rate = 15;
    //     }
    //     else if (totalPrice <= 5000 && totalPrice > 3000) {
    //         rate = 10;
    //     }

    //     // calculate discount
    //     discount = totalPrice * rate / 100;

    //     // adding discount to totalDiscount
    //     totalDiscount += discount;
    
    //     count++;    // increase counter for customer number
    // }

//-------------------------------------------------------------------------

    // enter data until user enters ‘y’ to continue and ‘n’ to stop

    // char choice = 'y';

    // while (choice == 'y') {
    //     cout << "Customer 0" << count << endl;

    //     cout << "\tEnter Total Price : "; // prompt
    //     cin >> totalPrice;                // input totalPrice

    //     // Checking CONDITIONS
    //     if (totalPrice > 10000) {
    //         rate = 25;
    //     }
    //     else if (totalPrice <= 10000 && totalPrice > 5000) {
    //         rate = 15;
    //     }
    //     else if (totalPrice <= 5000 && totalPrice > 3000) {
    //         rate = 10;
    //     }

    //     // calculate discount
    //     discount = totalPrice * rate / 100;

    //     // adding discount to totalDiscount
    //     totalDiscount += discount;
    
    //     count++;    // increase counter for customer number

    //     cout << "Do you want to continue? (y/n) : ";
    //     cin >> choice;

    //     if (choice == 'n') {
    //         break;
    //     }
    // }


//-------------------------------------------------------------------------

    // print totalDiscount
    cout << "Total Discount = " << fixed << setprecision(2) << totalDiscount << endl;

    return 0;
}