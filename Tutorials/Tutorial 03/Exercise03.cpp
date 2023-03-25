#include <iostream>

using namespace std;
int volume(int height, int width, int length);
// 1. Define a structure called Box 
struct Box{
	int height;
	int width;
	int length;
};

int main()
{
	// 2. Create a variable called box1 of the Box structure type
	Box box1;
	
	// 3. Create a variable called box2 of the Box structure type
	Box box2;
	
	int totalVolume;
	
	// 4. Input the height, width, lenght of box1 and box2
	
	cout<<"Enter Box1 height : ";
	cin >>box1.height;
	
	cout<<"Enter Box1 width :";
	cin >>box1.width;
	
	cout<<"Enter Box1 length :";
	cin >>box1.length;
	
	cout<<"Enter Box2 height : ";
	cin >>box2.height;
	
	cout<<"Enter Box2 width :";
	cin >>box2.width;
	
	cout<<"Enter Box2 length :";
	cin >>box2.length;
	
	// 5. Replace the coding below to pass the Box type structure
	/*totalVolume = volume( , , ) + volume( , , );*/
	
 	totalVolume = volume(box1.height,box1.width,box1.length) + volume(box2.height,box2.width,box2.length);
	
	cout << "Volume of Box is " << totalVolume << endl;
	
	return 0;
}

int volume(int height, int width, int length)
{
	return height * width * length;
}
