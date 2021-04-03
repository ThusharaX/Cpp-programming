#include<iostream>
using namespace std;

class ARR
{
 private : int A[100] , n , i , sum=0;
 public :  void INP();
           void SUM();
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

void ARR :: SUM()
{
  for(i=0;i<n;i++)
  {
sum=sum+A[i];
  }
}

void ARR :: DIS()
{
cout<<"Sum of elements of array : "<<" "<<sum;
}

int main ()
{
  ARR A;
  A.INP();
  A.SUM();
  A.DIS();
return 0;
}

  
  
  
  
