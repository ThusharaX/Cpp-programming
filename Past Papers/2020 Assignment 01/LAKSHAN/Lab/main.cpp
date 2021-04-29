#include "Lab.h"
#include <iostream>
using namespace std;

int main() {
  Lab l1,l2,l3;
  int uCapacity;

  l1.setLabDetails(401, 60);
  l2.setLabDetails(402, 40);
  l3.setLabDetails(403, 30);

  cout << "Insert capacity : ";
  cin >> uCapacity;

  if(uCapacity <= 30){
    cout << "Lab " << l3.getLabID() << endl;
  }
  else if(uCapacity > 30 && uCapacity <= 40){
    cout << "Lab " << l2.getLabID() << endl;
  }
  else if(uCapacity > 40 && uCapacity <= 60){
    cout << "Lab " << l1.getLabID() << endl;
  }

}