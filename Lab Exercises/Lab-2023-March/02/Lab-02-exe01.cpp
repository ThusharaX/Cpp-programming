// Lab-02-exe01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int searchKey(int number, int numbers[10]);     //function prototype
void findMax(int numbers[10]);

int main()      //main function begin
{
    int numbers[10];        //array 
    int i;
    int number;

    for (i = 0;i < 10;i++)
    {
        cout << "Enter " << i + 1 << " Number :";
        cin >> numbers[i];
    }
    cout << endl;

    cout << "Enter search number :";        //get user input to find integer
    cin >> number;

    cout << endl;

    searchKey(number,numbers);      //call the function
    findMax(numbers);           //call the function max number
    return 0;
}       //end of the main function

int searchKey(int number, int numbers[10])
{
    int i,j;

    for (i = 0;i < 10;i++)
    {
        if (numbers[i] == number)
        {
            j = 1;
            break;
        }
        else
        {
            j = 0;
        }
    }

    if (j == 0)
    {
        cout << "value Not Found" << endl<<endl;
        return 0;
    }
    else
    {
        cout << "Value Found"<<endl<<endl;
        return -1;
    }

   
}


void findMax(int numbers[10])
{
    int i, maxn;

    maxn = numbers[0];

    for (i = 0;i < 10;i++)
    {
        if (numbers[i] >= maxn)
        {
            maxn = numbers[i];
        }
    }

    cout <<"Max number is : " << maxn << endl;
    
    return ;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
