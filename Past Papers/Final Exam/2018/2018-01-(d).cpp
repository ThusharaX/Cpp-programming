#include<iostream>
#include<cstring>
#define SIZE 20

using namespace std;
// (i)
class Item{

private : 
  int itemID;
  char name[SIZE];
  double price;

public :
  Item();
  Item(int pid, char pname[]);
  void setPrice(double pprice);
  double getPrice();
  void display();
};

//(ii)

Item ::Item(int pid, char pname[]){
  itemID = pid;
  strcpy(name, pname);
}

//(iii)
void Item :: setPrice(double pprice){

  price = pprice;
}

double Item :: getPrice() {

  return price;
}
