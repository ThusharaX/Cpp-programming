// Paper Version : H

#include<iostream>

using namespace std;

// Class declarration
class Guest {
    private:
        int guestID;
        string guestName;
        int ratePerDay;
        int numberOfDays;
    public:
        void setGuestDetails(int gID, string gN, int rPD, int nOD);
        void displayGuestDetails();
        int calculateGuestBill();
};


int main() {

	// Create an Objects
    Guest g1, g2, g3;
	
	// Set values to Objects
    g1.setGuestDetails(1212, "Jared", 4500, 4);
    g2.setGuestDetails(1122, "Ben", 3000, 3);
    g3.setGuestDetails(1234, "Ruby", 5750, 2);

    // Calling displayGuestDetails() Method
    g1.displayGuestDetails();
    g2.displayGuestDetails();
    g3.displayGuestDetails();

    return 0;
}

// Class methods definition 
void Guest::setGuestDetails(int gID, string gN, int rPD, int nOD) {
    guestID = gID;
    guestName = gN;
    ratePerDay = rPD;
    numberOfDays = nOD;
}

void Guest::displayGuestDetails() {
    cout << endl << "Guest ID = " << guestID << endl;
    cout << "Guest Name = " << guestName << endl;
    cout << "Bill Amount = " << calculateGuestBill() << endl;
}

int Guest::calculateGuestBill() {
    return (ratePerDay * numberOfDays);
}
