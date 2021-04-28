#include "Plane.h"
#include <iostream>
using namespace std;

void Plane::setPlaneDetails(int iplaneID, string ipiolet, string idestination) {
    planeID = iplaneID;
    piolet = ipiolet;
    destination = idestination;
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