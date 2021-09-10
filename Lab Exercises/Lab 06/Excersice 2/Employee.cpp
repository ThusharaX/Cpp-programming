#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

void Employee::assignDetails(int pempno,const char pname[], double pbasicSal)
{
	empno = pempno;
	strcpy_s(name, pname);
	basicSal = pbasicSal;
}

void Employee::setAllowance(double pallowance)
{
	allowance = pallowance;
}

void Employee::setOTdetails(double pOTrate, double phours)
{
	OTrate = pOTrate;
	hours = phours;
}

void Employee::calcOT()
{
	OTsal = OTrate * hours;
}

void Employee::calcSal()
{
	calcOT();
	salary = OTsal + basicSal + allowance;
}

void Employee::printPaySlip()
{
	cout << "-------------------------------------------------" << endl;
	cout << "Emp No \t\t : " << empno << endl;
	cout << "Name \t\t : " << name << endl;
	cout << "Basic Salary \t : " << basicSal << endl;
	cout << "Allowance \t : " << allowance << endl;
	cout << "OT \t\t : " << OTsal << endl;
	cout << "Net Salary \t : " << salary << endl;
	cout << "-------------------------------------------------" << endl;

}


