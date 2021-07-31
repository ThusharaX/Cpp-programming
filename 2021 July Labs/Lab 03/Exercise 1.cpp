#include <iostream>
#include <iomanip>

using namespace std;

struct circle
{
    float radius;
};

struct rectangle
{
    float width;
    float length;
};

struct square
{
    float length;
};

float areaCircle(circle c);
float areaRectangle(rectangle r);
float areaSquare(square s);

int main(int argc , char* argv[])
{
    circle pond;
    rectangle smallRec, yard;
    square squ;

    float yardArea , lawnArea ;
    float pondArea, recArea, cirArea , squArea;

    cout << "Enter the Width of the Yard : " << flush;
    cin >> yard.width;
    cout << "Enter the Length of the Yard : " << flush;
    cin >> yard.length;
    cout << endl;

    cout << "Enter the Width of the Small Rectangle : " << flush;
    cin >> smallRec.width;
    cout << "Enter the Length of the Small Rectangle :" << flush;
    cin >> smallRec.length;
    cout << endl;

    cout << "Enter the Length of the Square : " << flush;
    cin >> squ.length;
    cout << endl;

    cout << "Enter the Radius of Pond : " << flush;
    cin >> pond.radius;
    cout << endl;

    yardArea = areaRectangle(yard);
    recArea = areaRectangle(smallRec);
    pondArea = areaCircle(pond);
    squArea = areaSquare(squ);

    lawnArea = yardArea - (recArea + pondArea + squArea);
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << "Lawn Area is : " << lawnArea << endl;

    char ch;
    cin >> ch;
    return 0;
}

float areaCircle(circle c)
{
    return (22.0 / 7 * c.radius * c.radius);
}

float areaRectangle(rectangle r)
{
    return (r.width * r.length);
}

float areaSquare(square s)
{
    return (s.length * s.length);
}
