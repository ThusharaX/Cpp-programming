#pragma once
class Employee
{
private:
	int empNo;
	char name[20];
	double basicSal;
	double allowance;
	double salary;
	int otHrs;
	double otRate;

public:
	//void assignDetails(int pempNo, char pname[], double pbasicSal);
	//void setAllowance(double pallowance);
	//void setOtDetails(int potHrs, double potRate);
	void calSal();
	void printPaySlip();
	void InputDetails();
};

