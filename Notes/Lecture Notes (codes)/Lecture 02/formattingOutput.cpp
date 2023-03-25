#include<iostream>
#include<iomanip>

/* • setw(n) - specifies number of spaces
*               used to display a number
*
*  • setprecision (n) – determines the number of
*                       digits to be printed in a
*                       floating point number
*
*  • setiosflags (ios::fixed) – determines the number
*                               of decimal places to be
*                               printed in a floating point
*                               number
*/

int main (void) {

    float num = 25.6957;

    std::cout << std::setw(12) << num << std::endl;

    std::cout<< std::setw(12) <<std::setprecision (5) << num<< std::endl;

    std::cout << std::setw(12) << std::setiosflags(std::ios::fixed) << std::setprecision (5) << num << std::endl;

    return 0;
}
