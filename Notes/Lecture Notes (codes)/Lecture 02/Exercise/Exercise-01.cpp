// Exercise  01

/* Write a C++ program to input the length and the width
   of a rectangle and calculate and print the perimeter.
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main (void) {

    // variable declaration
    float length, width, perimeter = 0;

    cout << "Enter Length : ";  // prompt
    cin >> length;              // input length
    cout << "Enter Width : ";   // prompt
    cin >> width;               // input width

    // calculate perimeter
    perimeter = 2 * (length + width);

    // print perimeter
    cout << "Perimeter = "<< fixed << setprecision(2) << perimeter << endl;

    return 0;
}