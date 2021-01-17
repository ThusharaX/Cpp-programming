#include<iostream>

int main() {

    int i;

    std::cin >> i;

    switch (i)
    {
    case 10:
        std::cout << "Num = 10" << std::endl;
        break;
    
    default:
        std::cout << "Not 10" << std::endl;
    }

    return 0;
}