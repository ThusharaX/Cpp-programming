#include<iostream>
using namespace std;

class ARR
{
  private: int A[100] , n , i , temp;
  public : void INP();
           void DIS();
           void SORT();
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

void ARR :: SORT()
{
 for(i=0;i<n;i++)
{
 if(A[i]>A[i+1])
 { 
   temp=A[i];
   A[i]=A[i+1];
   A[i+1]=temp;
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
 A.SORT();
 A.DIS();
return 0;
}
