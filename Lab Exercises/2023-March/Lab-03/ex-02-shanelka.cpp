#include <iostream>
#include <iomanip>

using namespace std;

// function prototype
void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

// create a structure
struct students {
    int marks1;
    int marks2;
    float CA1;
    float CA2;
};

// start the main function
int main() {
    students student[5]; // create variables with structure
    int i; // counter variable
    
    // get inputs from keyboard
    for (i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        cout << setw(23) << "Assignment 1 : ";
        cin >> student[i].marks1;
        cout << setw(23) << "Assignment 2 : ";
        cin >> student[i].marks2;

        findMarks(student[i].marks1, student[i].marks2, student[i].CA1, student[i].CA2);
    }

    // display headers
    cout << "Students" << setw(10) << "Marks1" << setw(10) << "Marks2" << setw(10) << "CA_1" << setw(10) << "CA_2" << endl;

    for (i = 0; i < 5; i++) {
        cout << i + 1;
        cout << setw(13) << student[i].marks1;
        cout << setw(10) << student[i].marks2;
        cout << setw(14) << fixed << setprecision(2) << student[i].CA1;
        cout << setw(10) << fixed << setprecision(2) << student[i].CA2 << endl;
    }

    return 0;
}

// function definition
void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {
	t_CA1 = (t_marks1 * 20.00) / 100;
	t_CA2 = (t_marks2 * 30.00) / 100;
}