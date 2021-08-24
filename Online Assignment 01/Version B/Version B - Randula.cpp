#include <iostream>
#include <cstring>

using namespace std;

//class declaration
class Employee
{
	private :
		int employeeID;
		char employeeName[50];
		int OTHours;
		int OTRate;
	
	public :
		void setEmployeeDetails(int eID , char eName[]);
		void displayEmployeeDetails();
		void setOTHours(int OTH);
		void setOTRate(int OTR);
		int calculateOTPayment();

};

//class methos definitions
void Employee::setEmployeeDetails(int eID , char eName[])
{
	employeeID = eID;
	strcpy(employeeName , eName);
}

void Employee::displayEmployeeDetails()
{
	cout << "Employee ID = " << employeeID << endl;
	cout << "Employee Name = " << employeeName << endl;
	cout << "OT Payment = " << calculateOTPayment() << endl;
	cout << endl;
}

void Employee::setOTHours(int OTH)
{
	OTHours = OTH;
}

void Employee::setOTRate(int OTR)
{
	OTRate = OTR;
}

int Employee::calculateOTPayment()
{
	return (OTHours * OTRate);
}

//main method
int main ()
{
	//create objects
	Employee e1 , e2;
	
	//set values for objects
	e1.setEmployeeDetails(1111 , "Nimal");
	e1.setOTRate(100);
	e1.setOTHours(22);
	
	e2.setEmployeeDetails(2222 , "Sunil");
	e2.setOTRate(200);
	e2.setOTHours(18);
	
	//get the output
	e1.displayEmployeeDetails();
	e2.displayEmployeeDetails();
	
	char ch;
	cin >> ch;
	
	return 0;
}
