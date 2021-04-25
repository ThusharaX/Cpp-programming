#include<iostream>
using namespace std;

int main ()
{
int i , n ,  A[100];

  cout<<"Enter size of array";
  cin>>n;
  cout<<"Enter array elements";
  for(i=0;i<n;i++)
  cin>>A[i];
  
  cout<<"Elements of the array: ";
  for(i=0;i<n;i++)
  cout<<A[i]<<" ";
  
  return 0;
}
  
