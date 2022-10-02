#include <iostream>
using namespace std;

//Picture class - parent class
class Picture {
	protected:
		string title;
		double price;
	
	public:
		void updatePrice();
};

//Photograph class - child
class Photograph: public Picture {
	private:
		string photograph;
		string camera;
		int speed;
		int aperture;
	
	public:
		void alterContrast();
};

//Painting class - child
class Painting: public Picture {
	private:
		string artist;
		string type;
		string owner;
	
	public:
		void printprovenance();
};
