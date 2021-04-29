// Using Char Arrays

#include<iostream>
#include<cstring>

using namespace std;

// You can put this code segment in Train.h file -----
class Train {
    private:
        int trainID;
        int capacity;
        char startTime[15];
        char destination[10];
    public:
        void setTrainDetails(int tID, int c, char sT[10], char d[15]);
        void displayTrainDetails();
        void setStartTime();
};
// ----------------------------------------------------

int main() {

    Train t1, t2, t3;

    t1.setTrainDetails(1, 200, (char *)"6:00AM", (char *)"Kandy");
    t2.setTrainDetails(2, 150, (char *)"7:30AM", (char *)"Galle");
    t3.setTrainDetails(3, 300, (char *)"4:00AM", (char *)"Jaffna");

    t1.setStartTime();
    t2.setStartTime();
    t3.setStartTime();

    t1.displayTrainDetails();
    t2.displayTrainDetails();
    t3.displayTrainDetails();

    return 0;
}

// You can put this code segment in Train.cpp file -----
void Train::setTrainDetails(int tID, int c, char sT[10], char d[15]) {
    trainID = tID;
    capacity = c;
    strcpy(startTime, sT);
    strcpy(destination, d);
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