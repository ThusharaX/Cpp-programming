#include<iostream>
using namespace std;

// Class B
class B{

  private : 
    int num2;

  public : 
    void setNum(int n2);
    int getNum();
};

void B:: setNum(int n2) {
    num2= n2;
}

int B::getNum(){

  return num2;
}

// Class A

class A{

  private :
    int num1;

  public :
    void setNum(int n1);
    void add(B b);
    void display();
};

// (i)

void A::setNum(int n1){
  num1 = n1;
}

void A :: add(B b){
  num1 = num1 + b.getNum();
}

void A::display(){

  cout <<"total is :" <<num1;
}

//main class 

int main() {
// (ii)
  A obj1;
  B obj2;

  obj1.add(obj2);
  obj1.display();

  // (iii)

  A *obj3;

  obj2.setNum(20);

  obj3->setNum(10);
  obj3->add(obj2);
  obj3->display(); 
}