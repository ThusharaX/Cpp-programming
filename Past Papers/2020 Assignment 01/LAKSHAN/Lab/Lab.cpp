#include "Lab.h"

void Lab::setLabDetails(int ilabID, int icapacity){
  labID = ilabID;
  capacity = icapacity;
}

int Lab::getLabID(){
  return labID;
}

int Lab::getCapacity(){
  return capacity;
}