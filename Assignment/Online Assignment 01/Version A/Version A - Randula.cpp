#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//class declaration
class Student
{
	private :
		int	studentID;
		char studentName[50];
		int marksOOC;
		int marksSPM;
		int marksISDM;
	
	public :
		void setStudentDetails(int sID , char sName[]);
		void setMarksOOC(int mOOC);
		int getMarksOOC();
		void setMarksSPM(int mSPM);
		int getMarksSPM();
		void setMarksISDM(int mISDM);
		int getMarksISDM();
};

//class methos definitions
void Student::setStudentDetails(int sID , char sName[])
{
	studentID = sID;
	strcpy(studentName , sName);
}

void Student::setMarksOOC(int mOOC)
{
	marksOOC = mOOC;
}

int Student::getMarksOOC()
{
	return marksOOC;
}

void Student::setMarksSPM(int mSPM)
{
	marksSPM = mSPM;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

void Student::setMarksISDM(int mISDM)
{
	marksISDM = mISDM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}

//main method
int main ()
{
	//create objects
	Student s1 , s2 , s3 , s4;
	
	//set values for objects
	s1.setStudentDetails(1234 , "Kamal");
	s1.setMarksOOC(85);
	s1.setMarksSPM(80);
	s1.setMarksISDM(75);
	
	s2.setStudentDetails(4567 , "Saman");
	s2.setMarksOOC(65);
	s2.setMarksSPM(50);
	s2.setMarksISDM(45);
	
	s3.setStudentDetails(7891 , "Nimal");
	s3.setMarksOOC(98);
	s3.setMarksSPM(75);
	s3.setMarksISDM(80);
	
	s4.setStudentDetails(1212 , "Sunil");
	s4.setMarksOOC(35);
	s4.setMarksSPM(60);
	s4.setMarksISDM(40);
	
	//declare variables
	double avgOOC , avgSPM , avgISDM;
	
	//calculate the average
	avgOOC = (s1.getMarksOOC() + s2.getMarksOOC() + s3.getMarksOOC() + s4.getMarksOOC()) / 4.0;
	avgSPM = (s1.getMarksSPM() + s2.getMarksSPM() + s3.getMarksSPM() + s4.getMarksSPM()) / 4.0;
	avgISDM = (s1.getMarksISDM() + s2.getMarksISDM() + s3.getMarksISDM() + s4.getMarksISDM()) / 4.0;
	
	//get the output
	cout << setiosflags(ios::fixed) << setprecision(2) << flush;
	cout << "Average OOC Mark : " << avgOOC << endl;
	cout << "Average SPM Mark : " << avgSPM << endl;
	cout << setprecision(0) << flush;
	cout << "Average ISDM Mark : " << avgISDM << endl;
	
	char ch;
	cin >> ch;
	
	return 0;
}
