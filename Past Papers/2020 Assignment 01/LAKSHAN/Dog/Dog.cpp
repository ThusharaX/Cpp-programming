#include "Dog.h"
#include <iostream>
#include <string.h>
using namespace std;

void Dog::setDogDetails(int pdogID, char pdogName[10], char powner[10]) {
    dogID = pdogID;
    strcpy(dogName, pdogName);
    strcpy(owner, powner);
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