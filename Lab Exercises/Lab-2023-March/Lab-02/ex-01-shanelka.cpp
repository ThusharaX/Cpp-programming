#include <iostream>

// function prototype

int searchKey(int x, int numbers[]);
int findMax(int numbers[]);

int main() {
    int numbers[10], number;
    int i; // counter variable

    // get inputs from keyboard
    for (i = 0; i < 10; i++) {
        std::cout << "Enter number " << i + 1 << " : ";
        std::cin >> numbers[i];
    }

    std::cout << std::endl << "Enter number for search : ";
    std::cin >> number;

    if (searchKey(number, numbers) != -1) {
        std::cout << "Index is " << searchKey(number, numbers) << std::endl;
    }
    else {
        std::cout << "Value not found";
    }

    std::cout << "Maximum number is " << findMax(numbers) << std::endl;

    return 0;
}

// function definition

int searchKey(int x, int numbers[]) {
    int i; // counter variable
    int status = -1; // for search return status

    for (i = 0; i < 10; i++) {
        if (x == numbers[i]) {
            status = i;
        }
    }

    return status;
}

int findMax(int numbers[]) {
    int max = numbers[0];
    int i;

    for (i = 0; i < 10; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }

    return max;
}