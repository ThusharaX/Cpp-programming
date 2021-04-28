#include<iostream>
using namespace std;

class Dog {
    private:
        int dogID;
        string dogName;
        string owner;

    public:
        void setDogDetails(int pdogID, string pdogName, string powner);
        void displayDogDetails();
        void setOwner();
};