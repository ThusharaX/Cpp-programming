// Exercise 2

#include <iostream>

int main()
{
	float cm;
	float inch;

	std::cout << "Input a length : ";
	std::cin >> cm;

	inch = cm / 2.54;

	std::cout << "Length in inches : " << inch << std::endl;

	return 0;
}
