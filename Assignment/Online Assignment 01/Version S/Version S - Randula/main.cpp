#include <iostream>
#include"Child.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//create objects
	Child c1 , c2 , c3;
	
	//set values to objects 
	c1.setChildDetails(1 , "Oliver" , "Toddler" , "Bryan" , "710342901");
	c2.setChildDetails(2 , "Cody" , "Elder" , "Joel" , "770343290");
	c3.setChildDetails(3 , "Kaden" , "Young" , "Jessica" , "771212070");
	
	//set new contact number
	c1.setCotactNo();
	c2.setCotactNo();
	c3.setCotactNo();
	
	//display details
	c1.displayChildDetails();
	c2.displayChildDetails();
	c3.displayChildDetails();
	
	return 0;
}
