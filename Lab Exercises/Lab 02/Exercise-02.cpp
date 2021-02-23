#include <iostream>

using namespace std;

struct Rectangle {
	int length, width;
};

int area(Rectangle r);

int main()
{
	int LawnArea;

	struct Rectangle sRec, lRec;

	sRec.length = 8;
	sRec.width = 4;
	lRec.length = 40;
	lRec.width = 20;

	LawnArea = area(lRec) - area(sRec);

	cout << "Lawn Area = " << LawnArea << endl;
}

int area(Rectangle r) {
	return (r.length * r.width);
}