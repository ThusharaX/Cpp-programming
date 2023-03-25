#include<iostream>
#include<cstring>

using namespace std;

//create the class
class Guest
{
	private : 
		int guestID;
		char guestName[30];
		int ratePerDay;
		int numberOfDays;
	
	public :
		void setGuestDetails(int gID , char * gName , int rPerDay , int noOfDays);
		void displayGuestDetails();
		int calculateGuestBill();
};

//implement public functions
void Guest::setGuestDetails(int gID , char *gName , int rPerDay , int noOfDays)
{
	guestID = gID;
	strcpy (guestName , gName);
	ratePerDay = rPerDay;
	numberOfDays = noOfDays;
}

void Guest::displayGuestDetails()
{
	cout << "Guest ID = " << guestID << endl;
	cout << "Guest Name = " << guestName << endl;
	cout << "Bill Amount = " << calculateGuestBill() << endl << endl;
}

int Guest::calculateGuestBill()
{
	return (ratePerDay * numberOfDays);
}

//define the main program
int main()
{
	//create objects
	Guest g1 , g2 , g3;
	
	//set values to objects
	g1.setGuestDetails(1212 , "Jared" , 4500 , 4);
	g2.setGuestDetails(1122 , "Ben" , 3000 , 3);
	g3.setGuestDetails(1234 , "Ruby" , 5750 , 2);
	
	//display details
	g1.displayGuestDetails();
	g2.displayGuestDetails();
	g3.displayGuestDetails();
	
	
	return 0;
}
