#include<iostream>
#include<cstring>
#include"Plane.h"

using namespace std;

//implement the public functions of the plane class
void Plane::setPlaneDetails(int pID , char* pPiolet , char* pDestination)
{
	planeID = pID;
	strcpy(piolet , pPiolet);
	strcpy(destination , pDestination);
}

void Plane::displayPlaneDetails()
{
	cout << endl;
	cout << "Plane ID = " << planeID << endl;
	cout << "Piolet = " << piolet << endl;
	cout << "Destination = " << destination << endl; 
}

void Plane::setNewPiolet()
{
	cout << "Input new piolet for plane " << planeID << " : " << flush;
	cin >> piolet;
}

char* Plane::getDestination()
{
	return destination;
}

