// Paper Version : N

#include<iostream>

using namespace std;

// Class declarration
class Train {
    private:
        int trainID;
        int capacity;
        string startTime;
        string destination;
    public:
        void setTrainDetails(int tID, int c, string sT, string d);
        void displayTrainDetails();
        void setStartTime();
};


int main() {

	// Create an Objects
    Train t1, t2, t3;
	
	// Set values to Objects
    t1.setTrainDetails(1, 200, "6:00AM", "Kandy");
    t2.setTrainDetails(2, 150, "7:30AM", "Galle");
    t3.setTrainDetails(3, 300, "4:00AM", "Jaffna");

    // Calling setStartTime() Method
    t1.setStartTime();
    t2.setStartTime();
    t3.setStartTime();

    // Calling displayTrainDetails() Method
    t1.displayTrainDetails();
    t2.displayTrainDetails();
    t3.displayTrainDetails();

    return 0;
}

// Class methods definition 
void Train::setTrainDetails(int tID, int c, string sT, string d) {
    trainID = tID;
    capacity = c;
    startTime = sT;
    destination = d;
}

void Train::displayTrainDetails() {
    cout << endl << "TrainID = " << trainID << endl;
    cout << "Capacity = " << capacity << endl;
    cout << "StartTime = " << startTime << endl;
    cout << "Destination = " << destination << endl;
}

void Train::setStartTime() {
    cout << "Input new start time of train " << trainID << ": ";
    cin >> startTime;
}