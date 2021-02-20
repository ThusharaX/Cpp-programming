// Exercise  02

/* Modify the program that was written to calculate the
   perimeter and area of a circle to display the
   results using two decimal places.
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main (void) {
    
    // variable declaration
    float Radius, perimeter, area;
    // get the value of pi (3.14286)
    float pi = (float)22/7;

    cout << "Enter Radius : ";  // prompt
    cin >> Radius;              // input Radius

    perimeter = 2 * pi * Radius;    // calculate perimeter
    area = pi * (Radius * Radius);  // calculate area

    // print perimeter
    cout << "Perimeter = "<< fixed << setprecision(2) << perimeter << endl;
    // print area
    cout << "Area = "<< fixed << setprecision(2) << area << endl;

    return 0;
}