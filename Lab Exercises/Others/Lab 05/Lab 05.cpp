#include <iostream>
#include "ShapeArea.h"

using namespace std;

// Implement structures
struct Circle {
	float radius;
};

struct Rectangle {
	float length;
	float width;
};

struct Square {
	float length;
};

float recPerimeter(float l, float w);

int main()
{
	float c1Area, rLArea, rSArea, s1Area;
	float greenArea;

	// Create structure variables
	Circle c1;
	Rectangle rL, rS;
	Square s1;

	// Input Data
	c1.radius = 5;
	rL.length = 28;
	rL.width = 15;
	rS.length = 7;
	rS.width = 3;
	s1.length = 4;

	// Calculate Area
	c1Area = areaCircle(c1.radius);
	rLArea = areaReactangle(rL.length, rL.width);
	rSArea = areaReactangle(rS.length, rS.width);
	s1Area = areaSquare(s1.length);
	greenArea = rLArea - (rSArea + c1Area + s1Area);

	// Print Resulta
	cout << "Green Area : " << greenArea << endl;
	cout << "Perimeter of Yard : " << recPerimeter(rL.length, rL.width) << endl;

	return 0;
}

float recPerimeter(float l, float w) {
	return (l + w) * 2;
}