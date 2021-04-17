#include<iostream>
using namespace std;
int main()
{
    int a,b, sum=0 , avg=0;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    sum=a+b;
    avg=mod(sum/2);
    
    cout<<"Modulus average is "<<avg;
    return 0;
}
