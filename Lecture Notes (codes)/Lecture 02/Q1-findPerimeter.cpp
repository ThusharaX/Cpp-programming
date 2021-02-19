// calculate perimeter of rectangle with 2 decimal places

#include <iostream>
#include<iomanip>

using namespace std;

int main (void) {

    float Radius, perimeter, area;
    float pi = (float)22/7;

    cout << "Enter Radius : ";
    cin >> Radius;

    perimeter = 2 * pi * Radius;
    area = pi * (Radius * Radius);

    cout << "Perimeter = "<< fixed << setprecision(2) << perimeter << endl;
    cout << "Area = "<< fixed << setprecision(2) << area << endl;

    return 0;
}
