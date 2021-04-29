#include <iostream>
#include "Dog.h"

int main() {
    Dog d1,d2,d3;

    d1.setDogDetails(1, (char*)"Zimba", (char*)"Lucy");
    d2.setDogDetails(2, (char*)"Timmy", (char*)"Kate");
    d3.setDogDetails(3, (char*)"Toby", (char*)"Joel");

    d1.setOwner();
    d2.setOwner();
    d3.setOwner();

    d1.displayDogDetails();
    d2.displayDogDetails();
    d3.displayDogDetails();

    return 0;
}