#include<iostream>
#include<cstring>
#include"Doctor.h"

using namespace std;

//define the public functions of the Taxi class
void Doctor::setDoctorDetails(int pID , char* pName , char* pSpec , char* pHospital)
{
	doctorID = pID;
	strcpy (doctorName , pName);
	strcpy (specialization , pSpec);
	strcpy (hospital , pHospital);	
}

void Doctor::displayDoctorDetails()
{
	cout << endl;
	cout << "Doctor ID = " << doctorID << endl;
	cout << "Doctor Name = " << doctorName << endl;
	cout << "Specialization = " << specialization << endl;
	cout << "Hospital = " << hospital << endl;
}

void Doctor::setNewHospital()
{
	cout << "Input new hospital for Doctor " << doctorID << " : " << flush;
	cin >> hospital;
}

char* Doctor::getSpecializaion()
{
	return specialization;
}


