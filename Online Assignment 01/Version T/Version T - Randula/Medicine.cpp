#include <iostream>
#include <iomanip>
#include "Medicine.h"

using namespace std;

//function implementation
void Medicine::setMedicieDetails(int mID , string mName , string sNess , double pdose)
{
	medicineID = mID;
	medicineName = mName;
	sickness = sNess;
	pdose = dose;
}

void Medicine::displayMedicinDetails()
{
	
	cout << "Medicine ID : " << medicineID << endl;
	cout << "Medicine Name : " << medicineName << endl;
	cout << "Sickness : " << sickness << endl;
	cout << setiosflags(ios::fixed) << setprecision(2) << flush;
	cout << "Dose : " << dose << endl << endl;
}

void Medicine::setDose()
{
	cout << "Input the new dose for Medicine " << medicineID << " : " << flush;
	cin >> dose;
}
