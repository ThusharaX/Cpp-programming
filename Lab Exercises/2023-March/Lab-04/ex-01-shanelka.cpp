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
float circleArea (float r);
float rectArea (float x, float y);
float squareArea (float x);

// start the main function
int main () {
    // create variables
    struct Circle c1;
    struct Rectangle rect1, rect2;
    struct Square squ1;

    float area;

    // assigning values
    c1.radius = 5;

    rect1.length = 28;
    rect1.width = 15;

    rect2.length = 7;
    rect2.width = 3;

    squ1.length = 4;

    // function calling and calculate
    area = rectArea (rect1.length, rect1.width) - ((rectArea (rect2.length, rect2.width) + squareArea (squ1.length) + circleArea (c1.radius)));

    // display output
    cout << "Green colour area = " << fixed << setprecision(3) << area << endl;

    return 0;
}

// function definition
float circleArea (float r) {
    return ((22 / 7.0) * r * r);
}

float rectArea (float x, float y) {
    return (x * y);
}

float squareArea (float x) {
    return (x * x);
}