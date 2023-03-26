/*  Implement the Circle class and write a
*   client (main) program to calculate and
*   print the area of a circle. 
*/

#include<iostream>

class Circle {
    private:
        float radius;

    public:
        void setRadius(float r) {
            radius = r;
        }
        float calcArea() {
            float area = (22/7) * radius * radius;
        }
};

int main(void) {
    

    
    return 0;
}