#include<iostream>
#include<cstring>
#include<iomanip>
#include"Student.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//create objects
	Student s1 , s2 , s3;
	
	
	
	//set values to objects
	s1.setStudentDetails(1234 , "Kylie" , 75 , 80 , 60);
	s2.setStudentDetails(4321 , "James" , 65 , 70 , 85);
	s3.setStudentDetails(6543 , "Kyson" , 90 , 85 , 80);
	
	//display student details while calculating and displaying the total and the average marks
	s1.printStudentDetails();
	s2.printStudentDetails();
	s3.printStudentDetails();
	
	char ch;
	cin >> ch;
	
	return 0;
}
