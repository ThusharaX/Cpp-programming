/*  Write a C++ program to input the length and the
*   width of a rectangle and find and print the area.
*/

#include<iostream>

// Rectangle Class
class Rectangle {
    // Data Members
    private:
        float length;
        float width;
    
    public:
        // Methods
        void setLength(float len) {
            length = len;
        }
        void setWidth(float wid) {
            width = wid;
        }
        float calcArea() {
            float area = length * width;
            return area;
        }
};

int main(void) {

    // create an OBJECTS
    Rectangle rect1, rect2;

    rect1.setLength(100.54);
    rect1.setWidth(2.54);

    rect2.setLength(50.23);
    rect2.setWidth(5.54);

    std::cout << "Area rect1 : " << rect1.calcArea() << std::endl;
    std::cout << "Area rect2 : " << rect2.calcArea() << std::endl;

    return 0;
}