#include<iostream>
#include<cstring>

using namespace std;

//create class
class Vehicle
{
	private :
		int vehicleID;
		char vehicleBrand[50];
		char vehicleType[50];
		float vehiclePrice;
	public :
		void setVehicleDetails(int vID , char *vBrand , char *vType , float vPrice);
		void displayVehicleDetails();
		void setVehiclePrice(float vPrice);
};

//define public functions
void Vehicle::setVehicleDetails(int vID , char *vBrand , char *vType , float vPrice)
{
	vehicleID = vID;
	strcpy (vehicleBrand , vBrand);
	strcpy (vehicleType , vType);
	vehiclePrice = vPrice;
}

void Vehicle::displayVehicleDetails()
{
	cout << endl;
	cout << "Vehicle ID : " << vehicleID << endl;
	cout << "Vehicle Brand : " << vehicleBrand << endl;
	cout << "Vehicle Type : " << vehicleType << endl;
	cout << "Vechile Price : " << vehiclePrice << endl;
}

void Vehicle::setVehiclePrice(float vPrice)
{
	vehiclePrice = vPrice;
}

//define main function
int main()
{
	int price;
	
	//create objects
	Vehicle v1 , v2 , v3;
	
	//set values for objects
	v1.setVehicleDetails(1 , "Toyota" , "SUV" , 8500000);
	v2.setVehicleDetails(2 , "Nissan" , "Saloon" , 6000000);
	v3.setVehicleDetails(3 , "Honda" , "Convertible" , 7200000);
	
	//take user inputs
	cout << "Input new price of vehicle 1 : " << flush;
	cin >> price;
	v1.setVehiclePrice(price);
	cout << "Input new price of vehicle 2 : " << flush;
	cin >> price;
	v2.setVehiclePrice(price);
	cout << "Input new price of vehicle 3 : " << flush;
	cin >> price;
	v3.setVehiclePrice(price);
	
	//display detials
	v1.displayVehicleDetails();
	v2.displayVehicleDetails();
	v3.displayVehicleDetails();
	
	return 0;
}
