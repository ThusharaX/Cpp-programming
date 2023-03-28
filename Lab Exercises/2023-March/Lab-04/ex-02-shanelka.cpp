#include <iostream>
#include <iomanip>

using namespace std;

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

// function prototype
float circleArea (struct Circle c);
float rectArea (struct Rectangle r);
float squareArea (struct Square s);
void findPerimeter (float length, float width, float &perimeter);
void findCost (float perimeter, float costPerUnit, float &totalCost);

// start the main function
int main () {
    // create variables
    struct Circle c1;
    struct Rectangle rect1, rect2;
    struct Square squ1;

    float area, perimeter, unitCost, totalCost;

    // assigning values
    c1.radius = 5;

    rect1.length = 28;
    rect1.width = 15;

    rect2.length = 7;
    rect2.width = 3;

    squ1.length = 4;

    // function calling and calculate
    area = rectArea (rect1) - ((rectArea (rect2) + squareArea (squ1) + circleArea (c1)));

    // display output
    cout << "Green colour area = " << fixed << setprecision(3) << area << endl;

    findPerimeter (rect1.length, rect1.width, perimeter);
    cout << "Perimeter of the land = " << fixed << setprecision(3) << perimeter << endl;

    cout << "Enter the cost per unit : ";
    cin >> unitCost;

    findCost (perimeter, unitCost, totalCost);
    cout << "Cost = " << fixed << setprecision(2) << totalCost << endl;

    return 0;
}

// function definition
float circleArea (struct Circle c) {
    return ((22 / 7.0) * c.radius * c.radius);
}

float rectArea (struct Rectangle r) {
    return (r.length * r.width);
}

float squareArea (struct Square s) {
    return (s.length * s.length);
}

void findPerimeter (float length, float width, float &perimeter) {
    perimeter = (length + width) * 2;
}

void findCost (float perimeter, float costPerUnit, float &totalCost) {
    totalCost = perimeter * costPerUnit;
}