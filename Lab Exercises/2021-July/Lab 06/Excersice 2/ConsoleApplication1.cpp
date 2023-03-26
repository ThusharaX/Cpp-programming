// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main(int argc , char* argv[])
{
    Employee emp1;

    emp1.assignDetails(10, "Wimal", 50000);
    emp1.setAllowance(5000);
    emp1.setOTdetails(100, 100);
    emp1.calcSal();
    emp1.printPaySlip();

    char ch;
    cin >> ch;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
