#include<iostream>
using namespace std;

int main()
{
int A[100] , sum=0 , a , size , i;

cout<<"Enter size";
cin>>size;

cout<<"Enter array";
for(i=0;i<size;i++)
{
    cin>>A[i];
}

cout<<"Enter target";
    cin>>a;
    
for(i=0;i<size;i++)
{
    if(A[i]+A[i+1]==a)
    {
        cout<<i<<" "<<i+1;
        exit(0);
    }
}    

    return 0;
    
}
