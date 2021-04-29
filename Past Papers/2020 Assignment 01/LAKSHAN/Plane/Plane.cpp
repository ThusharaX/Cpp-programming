#include "Plane.h"
#include <iostream>
#include <string.h>
using namespace std;

void Plane::setPlaneDetails(int iplaneID, char ipiolet[20], char idestination[20]) {
    planeID = iplaneID;
    strcpy(piolet, ipiolet);
    strcpy(destination, idestination);
}

void Plane::displayPlaneDetails() {
    cout << endl <<"PlaneID = " << planeID << endl;
    cout << "piolet = " << piolet << endl;
    cout << "destination = " << destination << endl;
}

void Plane::setPiolet() {
    cout << "Input new piolet of plane " << planeID << ": ";
    cin >> piolet;
}