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

    Train t[3];

    t[0].setTrainDetails(1, 200, "6:00AM", "Kandy");
    t[1].setTrainDetails(2, 150, "7:30AM", "Galle");
    t[2].setTrainDetails(3, 300, "4:00AM", "Jaffna");

    for(int i = 0; i < 3; i++) {
        t[i].setStartTime();
    }

    for(int i = 0; i < 3; i++) {
        t[i].displayTrainDetails();
    }

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