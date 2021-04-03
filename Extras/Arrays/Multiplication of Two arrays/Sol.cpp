#include<iostream>
using namespace std;

int main ()
{
    int A[100] , i , n , B[100] , C[100];
cout<<"Enter size of A and B";
cin>>n;
cout<<"Enter elements of A";
for(i=0;i<n;i++)
{
    cin>>A[i];
}

cout<<"Enter elements of B";
for(i=0;i<n;i++)
{
    cin>>B[i];
}

for(i=0;i<n;i++)
{
   C[i]=A[i]*B[i];
   cout<<C[i]<<" ";
}


return 0;
}
