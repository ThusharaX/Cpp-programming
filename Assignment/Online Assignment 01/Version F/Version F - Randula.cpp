#include<iostream>
#include<cstring>

using namespace std;

//create the class
class Course{
	private : 
		int courseID;
		char courseName[20];
		int creditPoints;
	public : 
		void setCourseDetails(int cID , char *cName , int cPoints);
		void displayCourseDetails();
		void setCreditPoints();
};

//define public functions
void Course::setCourseDetails(int cID , char *cName , int cPoints)
{
	courseID = cID;
	strcpy(courseName , cName);
	creditPoints = cPoints;
}

void Course::displayCourseDetails()
{
	cout << endl;
	cout << "CourseID = " << courseID << endl;
	cout << "CourseName = " << courseName << endl;
	cout << "CreditPoints = " << creditPoints << endl;
}

void Course::setCreditPoints()
{
	cout << "Input new " << courseName << " credit point : " << flush;
	cin >> creditPoints;
}

int main()
{
	//create objects
	Course c1 , c2 , c3 , c4;
	
	//set values for objects
	c1.setCourseDetails(1050 , "OOC" , 2);
	c2.setCourseDetails(1060 , "SPM" , 3);
	c3.setCourseDetails(1100 , "IWT" , 4);
	c4.setCourseDetails(1090 , "ISDM" , 4);
	
	//get user inputs
	c1.setCreditPoints();
	c2.setCreditPoints();
	c3.setCreditPoints();
	c4.setCreditPoints();
	
	//display details
	c1.displayCourseDetails();
	c2.displayCourseDetails();
	c3.displayCourseDetails();
	c4.displayCourseDetails();
	
	return 0;
}
