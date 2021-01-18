#include <iostream>

int main (void) {

    char letter = 'B';

    switch (letter)
    {
    case 'A':
        std::cout << "Letter is 'A'" << std::endl;
        break;

    case 'B':
        std::cout << "Letter is 'B'" << std::endl;
        break;

    default:
        std::cout << "Default statement" << std::endl;
    }

    return 0;
}