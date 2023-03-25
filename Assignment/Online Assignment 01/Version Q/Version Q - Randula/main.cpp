#include <iostream>
#include"Lecturer.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//create objects
	Lecturer l1 , l2 , l3;
	
	//assign values
	l1.setLecturerDetails("Ms.Shalini" , "OOC" , "Tuesday");
	l2.setLecturerDetails("Ms.Losini" , "IWT" , "Wednesday");
	l3.setLecturerDetails("Ms.Lokesha" , "OOC" , "Thursday");
	
	//assign new available day for objects
	l1.setAvailableDay();
	l2.setAvailableDay();
	l3.setAvailableDay();
	
	//display details
	l1.displayLectuereDetails();
	l2.displayLectuereDetails();
	l3.displayLectuereDetails();
	
	return 0;
}
