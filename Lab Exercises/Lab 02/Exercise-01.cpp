#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int searchKey(int, int numbers[]);
int findMax(int numbers[]);

int main()
{
	int numbers[10];
	int key = 10, result, max;

	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}

	cout << "Enter key : ";
	cin >> key;

	result = searchKey(key, numbers);

	if (result != -1)
	{
		cout << "Index = " << result << endl;
	}
	else
	{
		cout << endl << "Value not found!" << endl;
	}

	max = findMax(numbers);

	cout << endl << "Max = " << max << endl;
}

int searchKey(int key, int numbers[])
{
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int findMax(int numbers[])
{
	int max = numbers[0];

	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	return max;
}