// Paper Version : F

#include<iostream>

using namespace std;

// Class declarration
class Course {
    private:
        int courseID;
        string courseName;
        int creditPoints;
    public:
        void setCourseDetails(int cID, string cN, int cP);
        void displayCourseDetails();
        void setCreditPoints();
};


int main() {

	// Create an Objects
    Course c1, c2, c3, c4;
	
	// Set values to Objects
    c1.setCourseDetails(1050, "OOC", 2);
    c2.setCourseDetails(1060, "SPM", 3);
    c3.setCourseDetails(1100, "IWT", 4);
    c4.setCourseDetails(1090, "ISDM", 4);
	
	// Calling setCreditPoints() Method
    c1.setCreditPoints();
    c2.setCreditPoints();
    c3.setCreditPoints();
    c4.setCreditPoints();
	
	// Calling displayCourseDetails() Method
    c1.displayCourseDetails();
    c2.displayCourseDetails();
    c3.displayCourseDetails();
    c4.displayCourseDetails();

    return 0;
}

// Class methods definition 
void Course::setCourseDetails(int cID, string cN, int cP) {
    courseID = cID;
    courseName = cN;
    creditPoints = cP;
}

void Course::displayCourseDetails() {
    cout << endl << "CourseID = " << courseID << endl;
    cout << "CourseName = " << courseName << endl;
    cout << "CreditPoints = " << creditPoints << endl;
}

void Course::setCreditPoints() {
    cout << "Input new "<< courseName << " credit points : ";
    cin >> creditPoints;
}

