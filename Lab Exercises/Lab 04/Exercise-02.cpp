#include <iostream>
#include <iomanip>

using namespace std;

struct Rectangle
{
	float length;
	float width;
};

void calPerimeter(Rectangle r, float &perimeter);
float findCost(float, float);

int main()
{
	Rectangle rec;
	
	float perimeter = 0;
	float totalCost = 0;
	float costPerUnit = 0;
	
	cout << "Enter Length (Yard) : ";
	cin >> rec.length;
	cout << "Enter width (Yard) : ";
	cin >> rec.width;
	cout << "Cost per unit (in meters) : ";
	cin >> costPerUnit;
	
	calPerimeter(rec, perimeter);
	totalCost = findCost(perimeter, costPerUnit);
	
	cout << std::fixed;
	cout << endl << setprecision(2) << "Total cost = " << totalCost << endl;
	
	return 0;
}

void calPerimeter(Rectangle r, float &perimeter) {
	perimeter = (r.length + r.width) * 2;
}

float findCost(float p, float cpu) {
	return p * 	cpu;
}
