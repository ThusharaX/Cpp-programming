#include <iostream>

int main (void) {

    int count=1;

    while (count <= 10) {
        std::cout << count << std::endl;
        count ++;
    }

    count = 1;

    do {
        std::cout << count << std::endl;
        count ++;
    } while ( count <=10 );


    for(count=1; count <=10 ; count ++) {
        std::cout << count << std::endl;
    }

    return 0;
}