#include<iostream>
using namespace std;

// Order details class (Part)

class OrderDetails{

  private :
    int qty;
    string taxStatus;

  public :
  void calcSubTotal();
  float clacTax();  
};

// Oder class (Whole)

class Order{
  private :
    int date;
    string status;
    double price;
    OrderDetails *orderdetails; // define "Part" object here

  public :
    void addOrderDetails(OrderDetails *od){
      orderdetails = od;
    }

  void calcSubTotal();
  float calcTax();
  double calcTotal();
};

int main() {

  
  
}
