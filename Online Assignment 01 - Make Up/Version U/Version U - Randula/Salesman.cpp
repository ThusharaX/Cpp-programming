#include <iostream>
#include "Salesman.h"

using namespace std;

//implementation of the methods
void Salesman::setSalesmanDetails(int ID , string name , int sal , string cNo)
{
	salesmanid = ID;
	salesmanName = name;
	salary = sal;
	contactNo = cNo;
}

void Salesman::displaySalesmanDetails()
{
	cout << "Salesman ID : " << salesmanid << endl;
	cout << "Salesman Name : " << salesmanName << endl;
	cout << "Salary : " << salary << endl;
	cout << "Contact No : " << contactNo << endl << endl;
}

void Salesman::setSalesmanContactNo()
{
	cout << "Input new contact number for Salesman " << salesmanid << " : " << flush;
	cin >> contactNo;
}
