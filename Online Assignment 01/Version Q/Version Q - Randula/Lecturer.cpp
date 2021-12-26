#include<iostream>
#include<cstring>
#include"Lecturer.h"

using namespace std;

//implement the public funtions of the Lecturer class
void Lecturer::setLecturerDetails(char* name , char* sub , char* day)
{
	strcpy(lecturerName , name);
	strcpy(subject , sub);
	strcpy(availableDay , sub);
}

void Lecturer::displayLectuereDetails()
{
	cout << endl;
	cout << "Lecturer Name = " << lecturerName << endl;
	cout << "Subject = " << subject << endl;
	cout << "Available Day = " << availableDay << endl;
}

void Lecturer::setAvailableDay()
{
	cout << "Input available day of " << lecturerName << " : " << flush;
	cin >> availableDay;
}


