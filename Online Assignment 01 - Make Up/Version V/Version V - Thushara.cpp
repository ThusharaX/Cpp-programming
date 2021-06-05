#include <iostream>

using namespace std;

class Event {
    private:
        int eventID;
        string eventType;
        string themeColor;
        string location;
    public:
        void setEventDetails(int eID, string eT, string tC, string l);
        void displayEventDetails();
        void setEventLocation();
};

int main()
{
    Event *e1 = new Event();
    Event *e2 = new Event();
    Event *e3 = new Event();

    string location;

    e1->setEventDetails(1, "party", "red", "Nugegoda");
    e2->setEventDetails(2, "wedding", "purple", "Maharagama");
    e3->setEventDetails(3, "party", "pink", "Malabe");

    
    e1->setEventLocation();
    e2->setEventLocation();
    e3->setEventLocation();

    e1->displayEventDetails();
    e2->displayEventDetails();
    e3->displayEventDetails();
    
    delete e1;
    delete e2;
    delete e3;

    return 0;
}

void Event::setEventDetails(int eID, string eT, string tC, string l) {
    eventID = eID;
    eventType = eT;
    themeColor = tC;
    location = l;
}

void Event::displayEventDetails() {
    cout << "EventType = " << eventType << endl;
    cout << "ThemeColor = " << themeColor << endl;
    cout << "Location = " << location << endl << endl;
}

void Event::setEventLocation() {
    cout << "Input new location of event " << eventID << ": ";
    cin >> location;
}
