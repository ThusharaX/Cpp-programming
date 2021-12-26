#include<iostream>
#include<cstring>
#include"Taxi.h"

using namespace std;

//implement the public functions of the Taxi class
void Taxi::setTaxiDetails(int pID , char* pDriver , float pRate , float pDistance)
{
	taxiID = pID;
	strcpy (driver , pDriver);
	ratePerKM = pRate;
	distanceTravelled = pDistance;
}

void Taxi::displayTaxiDetails()
{
	cout << endl;
	cout << "Taxi ID = " << taxiID << endl;
	cout << "Driver Name = " << driver << endl;
	cout << "Bill Amount = " << calculateBill() << endl;
}

float Taxi::calculateBill()
{
	return (ratePerKM * distanceTravelled);
}
