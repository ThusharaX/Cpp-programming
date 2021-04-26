#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

void Employee::InputDetails()
{
	cout << "Input Employee No : ";
	cin >> empNo;
	cout << "Input Name : ";
	cin >> name;
	cout << "Input Basic Salary :";
	cin >> basicSal;	cout << "Input Allowance :";
	cin >> allowance;	cout << "Input OT Hours :";
	cin >> otHrs;	cout << "Input OT Rate :";
	cin >> otRate;}

void Employee::calSal() {
	salary = basicSal + allowance + (otHrs * otRate / 100.00);
}

void Employee::printPaySlip() {
	cout << "\n---------------------------" << endl;
	cout << "Emp No \t: " << empNo << endl;
	cout << "Name \t: " << name << endl;
	cout << "Basic Salary \t: " << basicSal << endl;
	cout << "Allowance \t: " << allowance << endl;
	cout << "Net Salary \t: " << salary << endl;
	cout << "---------------------------" << endl;
}

/* void Employee::assignDetails(int pempNo, char pname[], double pbasicSal) {
	empNo = pempNo;
	strcpy_s(name, pname);
	basicSal = pbasicSal;
}
*/

/* void Employee::setAllowance(double pallowance) {
	allowance = pallowance;
}
*/

/*void Employee::setOtDetails(int potHrs, double potRate) {
	otHrs = potHrs;
	otRate = potRate;
}
*/