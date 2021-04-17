#include<iostream>
using namespace std;

int main()
{
    int n, Rev = 0, rem;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        rem = n%10;
        Rev = Rev*10 + rem;
        n /= 10;
    }

    cout << "Reversed Number = " << Rev;
    return 0;
}
