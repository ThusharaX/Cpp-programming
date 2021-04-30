// Using Char Arrays

#include<iostream>
#include<cstring>

using namespace std;

// You can put this code segment in Plane.h file -----
class Plane {
    private:
        int planeID;
        char piolet[10];
        char destination[10];
    public:
        void setPlaneDetails(int pID, char p[10], char d[10]);
        void displayPlaneDetails();
        char *getDestination();
        void setPiolet();
};
// ----------------------------------------------------

int main() {

    Plane p1, p2, p3, p4;

    p1.setPlaneDetails(1, (char *)"John", (char *)"USA");
    p2.setPlaneDetails(2, (char *)"George", (char *)"UK");
    p3.setPlaneDetails(3, (char *)"Henry", (char *)"USA");
    p4.setPlaneDetails(4, (char *)"Ronald", (char *)"UAE");

    p1.setPiolet();
    p2.setPiolet();
    p3.setPiolet();
    p4.setPiolet();

    p1.displayPlaneDetails();
    p2.displayPlaneDetails();
    p3.displayPlaneDetails();
    p4.displayPlaneDetails();

    return 0;
}

// You can put this code segment in Plane.cpp file -----
void Plane::setPlaneDetails(int pID, char p[10], char d[10]) {
    planeID = pID;
    strcpy(piolet, p);
    strcpy(destination, d);
}

void Plane::displayPlaneDetails() {
    cout << endl <<"PlaneID = " << planeID << endl;
    cout << "Piolet = " << piolet << endl;
    cout << "Destination = " << getDestination() << endl;
}

void Plane::setPiolet() {
    cout << "Input new piolet of plane " << planeID << ": ";
    cin >> piolet;
}

char *Plane::getDestination() {
    return destination;
}
// ----------------------------------------------------

