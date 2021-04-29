#include<iostream>

using namespace std;

// You can put this code segment in Lab.h file -----
class Lab {
    private:
        int labID;
        int capacity;
    public:
        void setLabDetails(int lID, int c);
        int getCapacity();
        int getLabID();
};
// ----------------------------------------------------

int main() {

    int capacity;
    Lab l[3];

    l[0].setLabDetails(401, 60);
    l[1].setLabDetails(402, 40);
    l[2].setLabDetails(403, 30);

    cout << "Insert Capacity : ";
    cin >> capacity;

    for(int i = 3; i < 0; i++) {
        if (capacity <= l[i].getCapacity()) {
            cout << "Lab " << l[i].getLabID() << endl;
            break;
        }
    }

    return 0;
}

// You can put this code segment in Lab.cpp file -----
void Lab::setLabDetails(int lID, int c) {
    labID = lID;
    capacity = c;
}

int Lab::getCapacity() {
    return capacity;
}

int Lab::getLabID() {
    return labID;
}
// ----------------------------------------------------
