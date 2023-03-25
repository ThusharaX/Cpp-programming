// Paper Version : E

#include<iostream>

using namespace std;

// Class declarration
class Vehicle {
    private:
        int vehicleID;
        string vehicleBrand;
        string vehicleType;
        int vehiclePrice;
    public:
        void setVehicleDetails(int vID, string vB, string vT, int vP);
        void displayVehicleDetails();
        void setVehiclePrice();
};


int main() {

	// Create an Objects
    Vehicle v1, v2, v3;
	
	// Set values to Objects
    v1.setVehicleDetails(1, "Toyota", "SUV", 8500000);
    v2.setVehicleDetails(2, "Nissan", "Saloon", 6000000);
    v3.setVehicleDetails(3, "Honda", "Convertible", 7200000);

    // Calling setVehiclePrice() Method
    v1.setVehiclePrice();
    v2.setVehiclePrice();
    v3.setVehiclePrice();

    // Calling displayVehicleDetails() Method
    v1.displayVehicleDetails();
    v2.displayVehicleDetails();
    v3.displayVehicleDetails();

    return 0;
}

// Class methods definition 
void Vehicle::setVehicleDetails(int vID, string vB, string vT, int vP) {
    vehicleID = vID;
    vehicleBrand = vB;
    vehicleType = vT;
    vehiclePrice = vP;
}

void Vehicle::displayVehicleDetails() {
    cout << endl << "VehicleID = " << vehicleID << endl;
    cout << "VehicleBrand = " << vehicleBrand << endl;
    cout << "VehicleType = " << vehicleType << endl;
    cout << "VehiclePrice = " << vehiclePrice << endl;
}

void Vehicle::setVehiclePrice() {
    cout << "Input new price of vehicle " << vehicleID << " : ";
    cin >> vehiclePrice;
}
