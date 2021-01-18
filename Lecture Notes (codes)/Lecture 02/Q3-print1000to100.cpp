#include <iostream>

int main (void) {

    int count=1000;
    while (count >= 100) {
        std::cout << count << std::endl;
        count -= 100;
    }


    count = 1000;
    do {
        std::cout << count << std::endl;
        count -= 100;
    } while ( count >=100 );


    for(count=1000; count >=100 ; count -= 100) {
        std::cout << count << std::endl;
    }


    return 0;
}