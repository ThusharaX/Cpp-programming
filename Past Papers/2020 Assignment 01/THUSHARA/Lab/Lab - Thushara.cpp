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
};
// ----------------------------------------------------

int main() {

    int capacity;
    Lab l1, l2, l3;

    l1.setLabDetails(401, 60);
    l2.setLabDetails(402, 40);
    l3.setLabDetails(403, 30);

    cout << "Insert Capacity : ";
    cin >> capacity;

    if(capacity <= l3.getCapacity()){
        cout << "Lab 403" << endl;
    }
    else if(capacity <= l2.getCapacity()){
        cout << "Lab 402" << endl;
    }
    else if(capacity <= l1.getCapacity()){
        cout << "Lab 401" << endl;
    }
    else{
        cout << "Invalid input" << endl;
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
// ----------------------------------------------------
