#include<iostream>
#include<cstring>
#include"Child.h"

using namespace std;

//implementing the public functions of the Child class
void Child::setChildDetails(int cID , char* cName , char* aGroup , char* pName , char* contact)
{
	childID = cID;
	strcpy (childName , cName);
	strcpy (ageGroup , aGroup);
	strcpy (parentName , pName);
	strcpy (contactNo , contact);
}

void Child::displayChildDetails()
{
	cout << endl;
	cout << "Child Name = " << childName << endl;
	cout << "Parent Name = " << parentName << endl;
	cout << "Contact Number = " << contactNo << endl;
}

void Child::setCotactNo()
{
	cout << "Input new contact number of child " << childID << " : " << flush;
	cin >> contactNo;
}

