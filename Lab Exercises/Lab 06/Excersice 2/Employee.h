#pragma once
class Employee
{
private:
	int empno;
	char name[20];
	double basicSal;
	double allowance;
	double salary;
	double OTrate;
	double hours;
	double OTsal;

public:
	void assignDetails(int pempno,const char pname[], double pbasicSal);
	void setAllowance(double pallowance);
	void calcSal();
	void printPaySlip();
	void setOTdetails(double pOTrate, double phours);
	void calcOT();
};

