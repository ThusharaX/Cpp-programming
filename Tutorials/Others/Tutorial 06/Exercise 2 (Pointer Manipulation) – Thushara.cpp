#include<iostream>

using namespace std;

int main() {
	
	// 1
	float num1, num2;
	
	// 2
	cin >> num2;
	
	// 3
	float *n1Ptr, *n2Ptr;
	
	// 4
	n1Ptr = &num1;
	n2Ptr = &num2;
	
	// 5
	*n1Ptr += 7.8;
	
	// 6
	*n2Ptr -= 14.2;
	
	// 7
	cout << *n1Ptr << endl;
	cout << *n2Ptr << endl;
	
	// 8
	cout << num1 + num2 << endl;
		
	return 0;
}
