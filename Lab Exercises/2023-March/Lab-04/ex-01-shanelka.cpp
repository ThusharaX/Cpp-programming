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
    area = rectArea (rect1) - ((rectArea (rect2) + squareArea (squ1) + circleArea (c1)));

    // display output
    cout << "Green colour area = " << fixed << setprecision(3) << area << endl;

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