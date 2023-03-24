#include <iostream>
using namespace std;

void convertToFeetAndInches (int t_length, int &t_feet, int &t_inches);

int main() {
    int length = 25;
    int feet, inches;

    convertToFeetAndInches (length, feet, inches);

    cout << "Length : " << length << " = " << feet << " feet and " << inches << " inches " << endl;
    
    char ch;
    cin >> ch;

    return 0;
}

void convertToFeetAndInches (int t_length, int &t_feet, int &t_inches) {
    t_feet = t_length / 12;
    t_inches = t_length % 12;
}