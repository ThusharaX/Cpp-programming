#include<iostream>

void myFunction(int &x) {
    x++;
    std::cout << x << std::endl;
}

int main(void)
{
    int a = 10;
    myFunction(a);
    std::cout << a << std::endl;

    // Aliases
    int i1 = 100;
    int &integer1 = i1;
    std::cout << integer1 << std::endl;
    std::cout << i1 << std::endl;

    return 0;
}
