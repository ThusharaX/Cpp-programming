// Paper Version : P

#include<iostream>
#include <iomanip>

using namespace std;

// Class declarration
class Student {
    private:
        int studentID;
        string studentName;
        int marksOOC;
        int marksSPM;
        int marksISDM;
    public:
        void setStudentDetails(int sID, string sN, int mOOC, int mSPM, int mISDM);
        int getStudentID();
        int getMarksOOC();
        int getMarksSPM();
        int getMarksISDM();
};


int main() {

	// Create an Objects
    Student s1, s2, s3;
	
	// Set values to Objects
    s1.setStudentDetails(1234, "Kylie", 75, 80, 60);
    s2.setStudentDetails(4321, "James", 65, 70, 85);
    s3.setStudentDetails(6543, "Kyson", 90, 85, 80);

    // Calculate Average Marks
    double avgS1;
    double avgS2;
    double avgS3;

    avgS1 = (s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM()) / 3.0;
    cout << "StudentID = " << s1.getStudentID() << endl;
    cout << "StudentName = " << "Kylie" << endl;
    cout << "MarksOOC = " << s1.getMarksOOC() << endl;
    cout << "MarksSPM = " << s1.getMarksSPM() << endl;
    cout << "MarksISDM = " << s1.getMarksISDM() << endl;
    cout << "Total Marks = " << (s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM()) << endl;
    cout << "Average Mark : " << setprecision(4) << avgS1 << endl << endl;
    
    avgS2 = (s2.getMarksOOC() + s2.getMarksSPM() + s2.getMarksISDM()) / 3.0;
    cout << "StudentID = " << s2.getStudentID() << endl;
    cout << "StudentName = " << "James" << endl;
    cout << "MarksOOC = " << s2.getMarksOOC() << endl;
    cout << "MarksSPM = " << s2.getMarksSPM() << endl;
    cout << "MarksISDM = " << s2.getMarksISDM() << endl;
    cout << "Total Marks = " << (s2.getMarksOOC() + s2.getMarksSPM() + s2.getMarksISDM()) << endl;
    cout << "Average Mark : " << setprecision(4) << avgS2 << endl << endl;
    
    avgS3 = (s3.getMarksOOC() + s3.getMarksSPM() + s3.getMarksISDM()) / 3.0;
    cout << "StudentID = " << s3.getStudentID() << endl;
    cout << "StudentName = " << "Kyson" << endl;
    cout << "MarksOOC = " << s3.getMarksOOC() << endl;
    cout << "MarksSPM = " << s3.getMarksSPM() << endl;
    cout << "MarksISDM = " << s3.getMarksISDM() << endl;
    cout << "Total Marks = " << (s3.getMarksOOC() + s3.getMarksSPM() + s3.getMarksISDM()) << endl;
    cout << "Average Mark : " << setprecision(4) << avgS3 << endl << endl;

    return 0;
}

// Class methods definition 
void Student::setStudentDetails(int sID, string sN, int mOOC, int mSPM, int mISDM) {
    studentID = sID;
    studentName = sN;
    marksOOC = mOOC;
    marksSPM = mSPM;
    marksISDM = mISDM;
}

int Student::getStudentID() {
    return studentID;
}

int Student::getMarksOOC() {
    return marksOOC;
}

int Student::getMarksSPM() {
    return marksSPM;
}

int Student::getMarksISDM() {
    return marksISDM;
}
