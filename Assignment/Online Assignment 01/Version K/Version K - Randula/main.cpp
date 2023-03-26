#include <iostream>
#include<cstring>
#include"Taxi.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//create objects
	Taxi t1 , t2 , t3;
	
	//set values for objects
	t1.setTaxiDetails(1234 , "Ben" , 150 , 10);
	t2.setTaxiDetails(4321 , "Chris" , 250 , 4);
	t3.setTaxiDetails(3434 , "Nick" , 175 , 2);
	
	//display the details
	t1.displayTaxiDetails();
	t2.displayTaxiDetails();
	t3.displayTaxiDetails();
	
	return 0;
}
