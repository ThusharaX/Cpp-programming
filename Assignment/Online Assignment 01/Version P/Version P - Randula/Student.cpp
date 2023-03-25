#include<iostream>
#include<cstring>
#include<iomanip>
#include"Student.h"

using namespace std;

//implement the public functions of the Student class
void Student::setStudentDetails(int ID , char* sName , int OOC , int SPM , int ISDM)
{
	studentID = ID;
	strcpy (studentName , sName);
	marksOOC = OOC;
	marksSPM = SPM;
	marksISDM = ISDM;
}

void Student::printStudentDetails()
{
	int total;
	float average;
	
	cout << "Student ID = " << studentID << endl;
	cout << "Student Name = " << studentName << endl;
	cout << "Marks OOC = " << marksOOC << endl;
	cout << "Marks SPM = " << marksSPM << endl;
	cout << "Marks ISDM = " << marksISDM << endl;  
	
	//calculate total and average
	total = marksOOC + marksSPM + marksISDM;
	average = (float) total / 3;
	
	//display total and average
	cout << "Total marks = " << total << endl;
	cout << setiosflags(ios::fixed) << setprecision(2) << flush;
	cout << "Average = " << average << endl << endl;
}

int Student::getStudentID()
{
	return studentID;
}

int Student::getMarksOOC()
{
	return marksOOC;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}


