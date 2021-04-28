#include <iostream>
#include "Dog.h"

int main() {
    Dog d1,d2,d3;

    d1.setDogDetails(1, "Zimba", "Lucy");
    d2.setDogDetails(2, "Timmy", "Kate");
    d3.setDogDetails(3, "Toby", "Joel");

    d1.setOwner();
    d2.setOwner();
    d3.setOwner();

    d1.displayDogDetails();
    d2.displayDogDetails();
    d3.displayDogDetails();

    return 0;
}