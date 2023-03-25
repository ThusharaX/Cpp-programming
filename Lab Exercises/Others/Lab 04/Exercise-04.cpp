#include <iostream>

using namespace std;

struct Circle
{
	float radius;
};

struct Rectangle
{
	float length;
	float width;
};

struct Square
{
	float length;
};

float areaCircle(Circle c);
float areaRectangle(Rectangle r);
float areaSquare(Square s);

int main()
{
	Circle c1;
	Rectangle rSmall, rLarge;
	Square s1;
	
	float cArea, rAreaS, rAreaL, sArea, lawnArea;

	cout << "Enter Radius (pond): ";
	cin >> c1.radius;

	cout << "Enter Length (Rectangle building) : ";
	cin >> rSmall.length;
	cout << "Enter width (Rectangle building) : ";
	cin >> rSmall.width;

	cout << "Enter Length (Square building) : ";
	cin >> s1.length;

	cout << "Enter Length (Yard) : ";
	cin >> rLarge.length;
	cout << "Enter width (Yard) : ";
	cin >> rLarge.width;

	cArea = areaCircle(c1);
	rAreaS = areaRectangle(rSmall);
	sArea = areaSquare(s1);
	rAreaL = areaRectangle(rLarge);
	lawnArea = rAreaL - (cArea + rAreaS + sArea);

	cout << endl << "Area of the green colour area = " << lawnArea << endl;

	return 0;
}

float areaCircle(Circle c) {
	return (22.0 / 7) * c.radius * c.radius;
}

float areaRectangle(Rectangle r) {
	return r.length * r.width;
}

float areaSquare(Square s) {
	return s.length * s.length;
}
