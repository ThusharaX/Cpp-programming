#include <iostream>
#include <iomanip>

using namespace std;

struct circle
{
    float radius;
    float area;
};

struct rectangle
{
    float width;
    float length;
    float area;
    float perimeter;
};

struct square
{
    float length;
    float area;
};

void areaCircle(circle &c);
void areaRectangle(rectangle &r);
void areaSquare(square &s);
void perimeterRectangle(rectangle& r);
float findCost(float costPerUnit, float perimeter);


int main(int argc, char* argv[])
{
    circle pond;
    rectangle smallRec, yard;
    square squ;

    float yardArea, cost , costPerU;

    cout << "Enter the Width of the Yard : " << flush;
    cin >> yard.width;
    cout << "Enter the Length of the Yard : " << flush;
    cin >> yard.length;
    cout << endl;

    cout << "Enter the Width of the Small Rectangle : " << flush;
    cin >> smallRec.width;
    cout << "Enter the Length of the Small Rectangle : " << flush;
    cin >> smallRec.length;
    cout << endl;

    cout << "Enter the Length of the Square : " << flush;
    cin >> squ.length;
    cout << endl;

    cout << "Enter the Radius of Pond : " << flush;
    cin >> pond.radius;
    cout << endl;

    cout << "Enter the Cost per Unit for the Fence : " << flush;
    cin >> costPerU;
    cout << endl;

    //areaCircle(pond);
    //areaRectangle(yard);
    //areaRectangle(smallRec);
    //areaSquare(squ);

    perimeterRectangle(yard);
    cout << yard.area << endl;
    cout << pond.area << endl;
    cout << smallRec.area << endl;
    cout << squ.area << endl;

    yardArea = yard.area - (smallRec.area + pond.area + squ.area);
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << "Lawn Area is : " << yardArea << endl;

    cout << setprecision(2) << endl;
    cost = findCost(costPerU, yard.perimeter);
    cout << "The Perimeter of the Land is : " << yard.perimeter << endl;
    cout << "The Total Cost for the Fence is : Rs " << cost << endl;

    char ch;
    cin >> ch;
    return 0;
}

void areaCircle(circle &c)
{
    c.area = 22.0 / 7 * c.radius * c.radius;
}

void areaRectangle(rectangle &r)
{
   r.area = r.width * r.length;
}

void areaSquare(square &s)
{
    s.area = s.length * s.length;
}

void perimeterRectangle(rectangle& r)
{
    r.perimeter = 2 * (r.width + r.length);
}

float findCost(float costPerUnit, float perimeter)
{
    return costPerUnit * perimeter;
}