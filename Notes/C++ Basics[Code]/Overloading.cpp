#include <iostream>

using namespace std;

void printNumber(int num) {
	cout << "This is INT: " << num << endl << endl;
}

void printNumber(float num) {
	cout << "This is FLOAT: " << num << endl << endl;
}

void printNumber(int num1, float num2) {
	cout << "This is NUM 1: " << num1 << endl;
	cout << "This is NUM 2: " << num2 << endl << endl;
}

int main() {
	
	cout << "Function Overloading\n";

	int x = 10;
	float y = 12.234;
	
	printNumber(x);
	printNumber(y);
	printNumber(24, 5.258);

	return 0;
}
