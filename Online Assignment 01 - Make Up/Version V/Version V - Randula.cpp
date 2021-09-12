#include<iostream>
#include<cstring>

using namespace std;

//implementing the class
class Event
{
	private:
		int eventId;
		string eventType;
		string themeColor;
		string location;	
		
	public:
		void setEventDetails(int eID , string eType , string tColor , string loc );
		void displayEventDetails();
		void setEventLocation();
};


//implementing the main program
int main (void)
{
	//declaring dynamic objects
	Event *e1 = new Event();
	Event *e2 = new Event();
	Event *e3 = new Event();
	
	e1->setEventDetails(1 , "Party" , "Red" , "Nugegoda");
	e2->setEventDetails(2 , "Wedding" , "Purple" , "Maharagama");
	e3->setEventDetails(3 , "Party" , "Pink" , "Malabe");
	
	e1->setEventLocation();
	e2->setEventLocation();
	e3->setEventLocation();
	
	cout << endl;
	e1->displayEventDetails();
	e2->displayEventDetails();
	e3->displayEventDetails();
	
	//deleting dynamic objects
	delete e1;
	delete e2;
	delete e3;
	
	return 0;
}

//implementing the calling functions
void Event::setEventDetails(int eID , string eType , string tColor , string loc)
{
	eventId = eID;
	eventType = eType;
	themeColor = tColor;
	location = loc;
}

void Event::displayEventDetails()
{
	cout << "Event ID = " << eventId << endl;
	cout << "Event Type = " << eventType << endl;
	cout << "Theme Color = " << themeColor << endl;
	cout << "Location = " << location << endl << endl;
}

void Event::setEventLocation()
{
	cout << "Enter the new Location Event No." << eventId << " : " << flush;
	cin  >> location;
}
