#include<iostream>
#include<cstring>
using namespace std;

//implementation of the class
class Salesman
{
	//properties
	private:
		int salesmanid;
		string salesmanName;
		int salary;
		string contactNo;
	
	//methods
	public:
		void setSalesmanDetails(int ID , string name , int sal , string cNo);
		void displaySalesmanDetails();
		void setSalesmanContactNo();	
};


