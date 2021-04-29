#include "Dog.h"
#include <iostream>
using namespace std;

void Dog::setDogDetails(int pdogID, string  pdogName, string powner) {
    dogID = pdogID;
    dogName = pdogName;
    owner = powner;
}

void Dog::displayDogDetails() {
  
    cout << endl << "Dog ID : " << dogID << endl;
    cout << "Dog Name : " << dogName << endl;
    cout << "Owner : " << owner << endl;
}

void Dog::setOwner() {
    cout << "Input new owner of dog " << dogID << ": ";
    cin >> owner;
}