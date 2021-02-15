// Exercise 3

#include <iostream>

int main()
{
	int number;

	std::cout << "Enter Number : ";
	std::cin >> number;

	std::cout << "\nMultiplication Table\n\n";
	for (int i = 1; i <= 12; i++) {
		std::cout << number << "x" << i << "=" << number * i << std::endl;
	}

	return 0;
}
