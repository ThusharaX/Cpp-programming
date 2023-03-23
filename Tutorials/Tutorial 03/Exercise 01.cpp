#include <iostream>
#include <iomanip>
using namespace std;

int main()		//main function begin
{
	
	float marks[] = {78.4, 90.6, 45.9, 72.2,54.4};								//variable declaration
	char names[][20]={"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
	
	cout <<setw(5)<<"No" <<setw(15)<<"Name"<<setw(10)<<fixed<<setprecision(2)<<"Marks"<<endl;
	
	for(int r = 0; r < 5 ; r++)
	{
		cout <<setw(5)<<r+1<<setw(15)<<names[r]<<setw(10)<<fixed<<setprecision(2)<<marks[r]<<endl;
	}
	return 0;
}		//end of the main function
