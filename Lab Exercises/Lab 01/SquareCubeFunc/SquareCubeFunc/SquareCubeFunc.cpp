// Exercise 4

#include <iostream>

int Square(int);
int Cube(int);

int main()
{
	int number;

	std::cout << "Number : ";
	std::cin >> number;

	std::cout << "\nSquare : " << Square(number) << std::endl;
	std::cout << "Cube : " << Cube(number) << std::endl;
}

int Square(int x) {
	return x * x;
}

int Cube(int x) {
	return x * x * x;
}