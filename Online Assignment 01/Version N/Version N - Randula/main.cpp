#include <iostream>
#include <cstring>
#include "Train.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//create objects
	Train t1 , t2 , t3;
	
	//assign values to objects
	t1.setTrainDetails(1 , 200 , "6:00AM" , "Kandy");
	t2.setTrainDetails(2 , 150 , "7:30AM" , "Galle");
	t3.setTrainDetails(3 , 300 , "4:00AM" , "Jaffna");
	
	//get user inputs for start time
	t1.setStartTime();
	t2.setStartTime();
	t3.setStartTime();
	
	//display details
	t1.displayTrainDetails();
	t2.displayTrainDetails();
	t3.displayTrainDetails();
	
	return 0;
}
