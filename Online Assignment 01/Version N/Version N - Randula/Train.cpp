#include<iostream>
#include<cstring>
#include"Train.h"

using namespace std;

//implement the public functions of the Train class
void Train::setTrainDetails(int pID , int pCapacity , char* pTime , char* pDestination)
{
	trainID = pID;
	capacity = pCapacity;
	strcpy (startTime , pTime);
	strcpy (destination , pDestination);
}

void Train::setStartTime()
{
	cout << "Input the new start time for Train " << trainID << " : " << flush;
	cin >> startTime;
}

void Train::displayTrainDetails()
{
	cout << endl;
	cout << "Train ID = " << trainID << endl;
	cout << "Capacity = " << capacity << endl;
	cout << "Start Time = " << startTime << endl;
	cout << "Destination = " << destination << endl;
}
