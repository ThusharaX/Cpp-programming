#include<iostream>
using namespace std;

class ARR
{
  private: int A[100] , n , i;
  public : void INP();
           void DIS();
};

void ARR :: INP()
{
 cout<<"Enter size of array";
 cin>>n;
 cout<<"Enter array elements";
 for(i=0;i<n;i++)
{
cin>>A[i];
}
}

void ARR :: DIS()
{
 cout<<"Your Array is : "<<" ";
for(i=0;i<n;i++)
{
cout<<A[i];
}
}

int main ()
{
 ARR A;
 A.INP();
 A.DIS();
return 0;
}
