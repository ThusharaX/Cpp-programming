#include <iostream>
#include"Lab.h"

using namespace std;

int main(int argc, char** argv) {
	
	Lab L1 , L2 , L3;
	int input;
	
	L1.setLabDetails(401 , 60);
	L2.setLabDetails(402 , 40);
	L3.setLabDetails(403 , 30);
	
	cout << "Insert Capacity : " << flush;
	cin >> input;
	cout << endl;
	
	if (L3.getCapacity() >= input)
	{
		cout << "Lab 403" << endl;
	}
	else if (L2.getCapacity() >= input)
	{
		cout << "Lab 402" << endl;
	}
	else if (L1.getCapacity() >= input)
	{
		cout << "Lab 401" << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	
	char ch;
	cin >> ch;
	
	return 0;
}
