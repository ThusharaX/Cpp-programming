#include <iostream>
#include "Medicine.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//define objects
	Medicine m1 , m2 , m3;
	
	//set values
	m1.setMedicieDetails(1 , "Penadol" , "Headache" , 1.0);
	m2.setMedicieDetails(2 , "Vitamin C" , "Cold" , 1.5);
	m3.setMedicieDetails(3 , "Vicks" , "Cough" , 2.0); 
	
	//take user inputs
	m1.setDose();
	m2.setDose();
	m3.setDose();
	cout << endl;
	
	//display details
	m1.displayMedicinDetails();
	m2.displayMedicinDetails();
	m3.displayMedicinDetails();
	
	return 0;
}
