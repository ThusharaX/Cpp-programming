#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee emp1;

	//emp1.assignDetails(10, empName, 50000);
	//emp1.setAllowance(5000);
	//emp1.setOtDetails(10, 5);
	emp1.InputDetails();
	emp1.calSal();
	emp1.printPaySlip();

	return 0;
}