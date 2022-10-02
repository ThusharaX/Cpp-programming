#include <iostream>

using namespace std;

class Box{
	private:
		double length;
		double width;
		double height;
	
	public:
		Box();
		Box(int l, int w, int h);
		void setLength(int l);
		void setWidth(int w);
		void setHeight(int h);
		double findVolume();
};

//(i)
Box::Box() {
	length = 0;
	width = 0;
	height = 0;
}

//(ii)
Box::Box(int l, int w, int h) {
	length = l;
	width = w;
	height = h;
}

void Box::setLength(int l) {
	length = l;
}

void Box::setWidth(int w) {
	width = w;
}

void Box::setHeight(int h) {
	height = h;
}

double Box::findVolume() {
	return length * width * height;
}

int main() {
  
//(iii)
	Box box1; //static objects

//(iv)
	Box box2(5,2,3);

//(v)
	cout << "Volume is: " << box2.findVolume();

//(vi)
	Box *box3;

	box3 = new Box();

//(vii)
	box3->setLength(10);
	box3->setWidth(7);
	box3->setHeight(3);

//to check whether the variables are assigned properly
	cout << "Volume from dynamic object: " << box3->findVolume();
}
