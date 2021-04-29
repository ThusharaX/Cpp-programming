#include <iostream>
#include "Plane.h"

int main() {
   Plane p1,p2,p3,p4;

    p1.setPlaneDetails(1, (char*)"John", (char*)"USA");
    p2.setPlaneDetails(2, (char*)"George", (char*)"UK");
    p3.setPlaneDetails(3, (char*)"Henry", (char*)"USA");
    p4.setPlaneDetails(4, (char*)"Ronald", (char*)"UAE");

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