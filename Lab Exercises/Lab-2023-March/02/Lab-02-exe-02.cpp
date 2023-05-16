#include <iostream>

using namespace std;

//Structure for rectangle
struct Rectangle {
	int length;
	int width;
};

int area(int length, int width);		//function prototype

int main()
{
	Rectangle house{};		//create variables from Rectangle structure
	Rectangle yard{};

	cout << "Enter length of house :";		//get user inputs
	cin >> house.length;

	cout << "Enter width of house :";
	cin >> house.width;

	cout << "Enter length of yard :";
	cin >> yard.length;

	cout << "Enter width of yard :";
	cin >> yard.width;

	cout << "Area of house : " << area(house.length, house.width) << endl;
	cout << "Area of yard : " << area(yard.length, yard.width) << endl;
	cout << "Area of green color area : " << area(yard.length, yard.width) - area(house.length, house.width) << endl;
}

int area(int length, int width)
{
	return length * width;
}