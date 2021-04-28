#include "Train.h"
#include <iostream>
using namespace std;

void Train::setTrainDetails(int ptrainID, int pcapacity, std::string pstartTime, std::string pdestination){
  trainID = ptrainID;
  capacity = pcapacity;
  startTime = pstartTime;
  destination = pdestination;
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