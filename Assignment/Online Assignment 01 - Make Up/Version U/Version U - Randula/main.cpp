#include <iostream>
#include "Salesman.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//implement the main program
int main() 
{
	//create the dynamic objects
	Salesman *s1 = new Salesman();
	Salesman *s2 = new Salesman();
	Salesman *s3 = new Salesman();
	
	//define the values for the objects
	s1->setSalesmanDetails(1 , "John" , 30000 , "772358375");
	s2->setSalesmanDetails(2 , "Ann" , 40000 , "773029452");
	s3->setSalesmanDetails(3 , "Leema" , 35000 , "778294526");
	
	//assign user inputs for contact number
	s1->setSalesmanContactNo();
	s2->setSalesmanContactNo();
	s3->setSalesmanContactNo();
	
	cout << endl;
	//display salesman details
	s1->displaySalesmanDetails();
	s2->displaySalesmanDetails();
	s3->displaySalesmanDetails();
	
	//delete the objects
	delete s1;
	delete s2;
	delete s3;
	
	
	return 0;
}
