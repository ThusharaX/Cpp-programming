#include<iostream>
using namespace std;

class ARR
{
 private : int A[100] , n , i ,pr=1;
 public :  void INP();
           void PRO();
           void DIS();
};


void ARR :: INP()
{
cout<<"enter Array size";
  cin>>n;
  cout<<"Enter array Elements";
  for(i=0;i<n;i++)
  {
cin>>A[i];
  }
}

void ARR :: PRO()
{
  for(i=0;i<n;i++)
  {
pr=pr*A[i];
  }
}

void ARR :: DIS()
{
cout<<"Products of elements of array : "<<" "<<pr;
}

int main ()
{
  ARR A;
  A.INP();
  A.PRO();
  A.DIS();
return 0;
}
