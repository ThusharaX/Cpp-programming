// Using String

#include<iostream>

using namespace std;

// You can put this code segment in Dog.h file -----
class Dog {
    private:
        int dogID;
        string dogName;
        string owner;
    public:
        void setDogDetails(int dID, string dN, string o);
        void displayDogDetails();
        void setOwner();
};
// ----------------------------------------------------

int main() {

    Dog d1, d2, d3;

    d1.setDogDetails(1, "Zimba", "Lucy");
    d2.setDogDetails(2, "Timmy", "Kate");
    d3.setDogDetails(3, "Toby", "Joel");

    d1.setOwner();
    d3.setOwner();
    d3.setOwner();

    d1.displayDogDetails();
    d2.displayDogDetails();
    d3.displayDogDetails();

    return 0;
}

// You can put this code segment in Dog.cpp file -----
void Dog::setDogDetails(int dID, string dN, string o) {
    dogID = dID;
    dogName = dN;
    owner = o;
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