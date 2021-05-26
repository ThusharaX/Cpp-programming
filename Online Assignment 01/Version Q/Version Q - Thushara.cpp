// Paper Version : Q

#include <iostream>

using namespace std;

// Class declarration
class Lecturer {
    private:
        string lecturerName;
        string subject;
        string availableDay;
    public:
        void setLecturerDetails(string lN, string s,string aD);
        void displayLecturerDetails();
        void setAvailableDay();
};

int main() {

    // Create an Objects
    Lecturer l1,l2,l3;

    // Set values to Objects
    l1.setLecturerDetails("Ms.Salini", "OOC", "Friday");
    l2.setLecturerDetails("Ms.Losini", "IWT", "Monday");
    l3.setLecturerDetails("Ms.Lokesha", "OOC", "Tuesday");

    // Calling setAvailableDay() Method
    l1.setAvailableDay();
    l2.setAvailableDay();
    l3.setAvailableDay();

    // Calling displayLecturerDetails() Method
    l1.displayLecturerDetails();
    l2.displayLecturerDetails();
    l3.displayLecturerDetails();

    return 0;
}

// Class methods definition
void Lecturer::setLecturerDetails(string lN, string s,string aD) {
    lecturerName = lN;
    subject = s;
    availableDay = aD;
}

void Lecturer::displayLecturerDetails() {
    cout << endl << "LecturerName = " << lecturerName << endl;
    cout << "Subject = " << subject << endl;
    cout << "AvailableDay = " << availableDay << endl;
}

void Lecturer::setAvailableDay() {
    cout << "Input available day of " << lecturerName << ": ";
    cin >> availableDay;
}