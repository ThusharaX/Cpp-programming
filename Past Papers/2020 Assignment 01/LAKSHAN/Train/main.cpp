#include <iostream>
#include <string>
#include "Train.h"

int main() {
  Train t1,t2,t3;

  t1.setTrainDetails(1, 200, "6.00AM", "Kandy");
  t2.setTrainDetails(2, 150, "7.30AM", "Galle");
  t3.setTrainDetails(3, 300, "4.00AM", "Jaffna");

  t1.setStartTime();
  t2.setStartTime();
  t3.setStartTime();
  cout << endl;

  t1.displayTrainDetails();
  cout << endl;

  t2.displayTrainDetails();
  cout << endl;

  t3.displayTrainDetails();
  cout << endl;

}