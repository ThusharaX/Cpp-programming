// Using String

#include<iostream>

using namespace std;

// You can put this code segment in Train.h file -----
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
// ----------------------------------------------------

int main() {

    Train t1, t2, t3;

    t1.setTrainDetails(1, 200, "6:00AM", "Kandy");
    t2.setTrainDetails(2, 150, "7:30AM", "Galle");
    t3.setTrainDetails(3, 300, "4:00AM", "Jaffna");

    t1.setStartTime();
    t2.setStartTime();
    t3.setStartTime();

    t1.displayTrainDetails();
    t2.displayTrainDetails();
    t3.displayTrainDetails();

    return 0;
}

// You can put this code segment in Train.cpp file -----
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
// ----------------------------------------------------