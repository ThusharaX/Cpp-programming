#include<iostream>

using namespace std;

int main() {
	
	float number1 = 6.2;
	float number2 = 7.3;
	
	// 1
	float *fPtr;
	
	// 2
	fPtr = &number1;
	
	// 3
	cout << *fPtr << endl;
	
	// 4
	number2 = *fPtr;
	
	// 5
	cout << number2 << endl;
	
	// 6
	cout << &number1 << endl;
	
	// 7
	cout << fPtr << endl;
	
	return 0;
}
