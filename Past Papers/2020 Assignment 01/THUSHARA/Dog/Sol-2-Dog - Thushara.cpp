// Using Char Arrays

#include<iostream>
#include<cstring>

using namespace std;

// You can put this code segment in Dog.h file -----
class Dog {
    private:
        int dogID;
        char dogName[10];
        char owner[10];
    public:
        void setDogDetails(int dID, char dN[10], char o[10]);
        void displayDogDetails();
        void setOwner();
};
// ----------------------------------------------------

int main() {

    Dog d1, d2, d3;

    d1.setDogDetails(1, (char *)"Zimba", (char *)"Lucy");
    d2.setDogDetails(2, (char *)"Timmy", (char *)"Kate");
    d3.setDogDetails(3, (char *)"Toby", (char *)"Joel");

    d1.setOwner();
    d3.setOwner();
    d3.setOwner();

    d1.displayDogDetails();
    d2.displayDogDetails();
    d3.displayDogDetails();

    return 0;
}

// You can put this code segment in Dog.cpp file -----
void Dog::setDogDetails(int dID, char dN[10], char o[10]) {
    dogID = dID;
    strcpy(dogName, dN);
    strcpy(owner, o);
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
// ----------------------------------------------------