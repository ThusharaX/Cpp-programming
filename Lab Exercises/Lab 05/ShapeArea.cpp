#include <iostream>
#include "ShapeArea.h"

using namespace std;

float areaCircle(float r) {
	return (22 / 7.0 * r * r);
}

float areaReactangle(float l, float w) {
	return (l * w);
}

float areaSquare(float l) {
	return (l * l);
}