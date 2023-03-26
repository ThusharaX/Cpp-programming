// Paper Version : K

#include<iostream>

using namespace std;

// Class definition
class Taxi {
    private:
        int taxiID;
        string driver;
        int ratePerKM;
        int distanceTravelled;
    public:
        void setTaxiDetails(int tID, string d, int rPKM, int dT);
        void displayTaxiDetails();
        float calculateBill();
};


int main() {

	// Create an Objects
    Taxi t1, t2, t3;

    // Set values to Objects
    t1.setTaxiDetails(1234, "Ben", 150, 10);
    t2.setTaxiDetails(4321, "Chris", 250, 4);
    t3.setTaxiDetails(3434, "Nick", 175, 2);
	
    // Calling displayTaxiDetails() Method
    t1.displayTaxiDetails();
    t2.displayTaxiDetails();
    t3.displayTaxiDetails();

    return 0;
}

// Class methods definition 
void Taxi::setTaxiDetails(int tID, string d, int rPKM, int dT) {
    taxiID = tID;
    driver = d;
    ratePerKM = rPKM;
    distanceTravelled = dT;
}

void Taxi::displayTaxiDetails() {
    cout << endl << "Taxi ID = " << taxiID << endl;
    cout << "Driver Name = " << driver << endl;
    cout << "BillAmount = " << calculateBill() << endl;
}

float Taxi::calculateBill() {
    return (ratePerKM * distanceTravelled);
}
