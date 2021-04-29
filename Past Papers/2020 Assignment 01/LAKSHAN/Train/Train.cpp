#include "Train.h"
#include <iostream>
#include <string.h>
using namespace std;

void Train::setTrainDetails(int ptrainID, int pcapacity, char pstartTime[10], char pdestination[20]){
  trainID = ptrainID;
  capacity = pcapacity;
  strcpy(startTime, pstartTime);
  strcpy(destination, pdestination);
}

void Train::displayTrainDetails(){
  cout << "TrainID = " << trainID << endl;
  cout << "Capacity = " << capacity << endl;
  cout << "StartTime = " << startTime << endl;
  cout << "Destination = " << destination << endl;
}

void Train::setStartTime(){
  cout << "Input new start time of train " << trainID << " : ";
  cin >> startTime;
}