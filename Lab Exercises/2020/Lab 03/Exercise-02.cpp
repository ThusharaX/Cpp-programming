#include <iostream>
#include<iomanip>

using namespace std;

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

struct Marks
{
	int student;
	int marks1;
	int marks2;
	float CA1;
	float CA2;
};

int main()
{
	int count;
	Marks details[5];

	for (count = 0; count < 5; count++) {
		details[count].student = count + 1;
		cout << "Student " << details[count].student << endl;
		cout << "\tMarks1 : ";
		cin >> details[count].marks1;
		cout << "\tMarks2 : ";
		cin >> details[count].marks2;
		cout << endl;

		findMarks(details[count].marks1, details[count].marks2, details[count].CA1, details[count].CA2);
	}

	cout << "Student";
	cout << setw(10) << "Marks1";
	cout << setw(10) << "Marks2";
	cout << setw(9) << "CA_1";
	cout << setw(9) << "CA_2" << endl;
	for (count = 0; count < 5; count++) {
		cout << details[count].student;
		cout << setw(12) << details[count].marks1;
		cout << setw(10) << details[count].marks2;
		cout << setw(13) << setprecision(2) << fixed << details[count].CA1;
		cout << setw(9) << setprecision(2) << fixed << details[count].CA2 << endl;
	}

}

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {
	t_CA1 = (t_marks1 * 20.00) / 100;
	t_CA2 = (t_marks2 * 30.00) / 100;
}