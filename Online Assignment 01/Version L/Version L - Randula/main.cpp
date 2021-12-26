#include <iostream>
#include <cstring>
#include "Doctor.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//create objects
	Doctor d1 , d2 , d3;
	
	//set values for objects
	d1.setDoctorDetails(1 , "Dr.Sunil" , "Neurologist" , "Kandy");
	d2.setDoctorDetails(2 , "Dr.Yasantha" , "Oncologist" , "Colombo");
	d3.setDoctorDetails(3 , "Dr.Godvin" , "Cardiologist" , "Kegalle");
	
	//set new hospital
	d1.setNewHospital();
	d2.setNewHospital();
	d3.setNewHospital();
	
	//display details
	d1.displayDoctorDetails();
	d2.displayDoctorDetails();
	d3.displayDoctorDetails();
	
	
	cout << endl;
	//get specialication
	cout << d1.getSpecializaion() << endl;
	cout << d2.getSpecializaion() << endl;
	cout << d3.getSpecializaion() << endl;
	return 0;
}
