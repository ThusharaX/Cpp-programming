// Exercise  04

/* Display number 1000,900,800,700,… 100 Using a
   while loop, do while loop and a for loop
   within the same program.
*/

#include <iostream>

using namespace std;

int main (void) {

    // variable declaration
    int count=1000;

    // WHILE
    while (count >= 100) {
        cout << count << ",";
        count -= 100;
    }
    cout << endl;

    // DO-WHILE
    count = 1000;
    do {
        cout << count << ",";
        count -= 100;
    } while ( count >=100 );
    cout << endl;

    // FOR
    for(count=1000; count >=100 ; count -= 100) {
        cout << count << ",";
    }
    cout << endl;

    return 0;
}