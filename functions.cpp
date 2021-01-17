#include<iostream>

// in functions we can use storage classes such as 'static'

int add(int, int);
bool isGreaterThan(int, int);
void printHello();
std::string join(std::string, std::string);
int multi(int, int, int = 10);    // 3rd parameter has default value
                                  // default set ~ right to left ~

int main(void) {
    int num1, num2, total;
    
    std::cin >> num1;
    std::cin >> num2;
    total = add(num1, num2);
    std::cout << total << std::endl;
    std::cout << isGreaterThan(10, 5) << std::endl;
    printHello();
    std::cout << join("Thushsra", "Thiwanka") << std::endl;
    std::cout << multi(10, 20) << std::endl;    // 3rd param set to default value

    return 0;
}

int add(int n1, int n2) {   //  #Function overloading - can have same function name
    int total;              //  int add(int a, int, b, int c) {
    total = n1 + n2;        //      return total
    return total;           //  }
}

bool isGreaterThan(int x, int y) {
    return x > y;
}

void printHello(void) {
    std::cout << "Hello LuciferX" << std::endl;
}

std::string join(std::string s1, std::string s2) {
    return s1 + " " + s2;
}

int multi(int a, int b, int c) {
    return a * b * c;
}