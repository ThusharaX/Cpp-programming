#include <iostream>
#include"Plane.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	
	//create objects
	Plane p1 , p2 , p3 , p4;
	
	//set details to the objects
	p1.setPlaneDetails(1 , "John" , "USA");
	p2.setPlaneDetails(2 , "George" , "UK");
	p3.setPlaneDetails(3 , "Henry" , "USA");
	p4.setPlaneDetails(4 , "Ronald" , "UAE");
	
	//set new piolet for the objects
	p1.setNewPiolet();
	p2.setNewPiolet();
	p3.setNewPiolet();
	p4.setNewPiolet();
	
	//display details
	p1.displayPlaneDetails();
	p2.displayPlaneDetails();
	p3.displayPlaneDetails();
	p4.displayPlaneDetails();

	cout << endl;
	//get destination
	cout << p1.getDestination() << endl;
	cout << p2.getDestination() << endl;
	cout << p3.getDestination() << endl;
	cout << p4.getDestination() << endl;
	
	return 0;
}
