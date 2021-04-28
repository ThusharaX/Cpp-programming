#include<iostream>

using namespace std;

// You can put this code segment in Plane.h file -----
class Plane {
    private:
        int planeID;
        string piolet;
        string destination;
    public:
        void setPlaneDetails(int pID, string p, string d);
        void displayPlaneDetails();
        void setPiolet();
        // void getDestination();
};
// ----------------------------------------------------

int main() {

    Plane p[4];

    p[0].setPlaneDetails(1, "John", "USA");
    p[1].setPlaneDetails(2, "George", "UK");
    p[2].setPlaneDetails(3, "Henry", "USA");
    p[3].setPlaneDetails(4, "Ronald", "UAE");

    for(int i = 0; i < 4; i++) {
        p[i].setPiolet();
    }

    for(int i = 0; i < 4; i++) {
        p[i].displayPlaneDetails();
    }

    return 0;
}

// You can put this code segment in Plane.cpp file -----
void Plane::setPlaneDetails(int pID, string p, string d) {
    planeID = pID;
    piolet = p;
    destination = d;
}

void Plane::displayPlaneDetails() {
    cout << endl <<"PlaneID = " << planeID << endl;
    cout << "Piolet = " << piolet << endl;
    cout << "Destination = " << destination << endl;
}

void Plane::setPiolet() {
    cout << "Input new piolet of plane " << planeID << ": ";
    cin >> piolet;
}
// ----------------------------------------------------

// void Plane::getDestination() {

// }
