#include<iostream>
using namespace std;

int main()
{
int a , b , diff , diff1;
double c , d;
  
cout<<"Enter two integers to be subtracted";
cin>>a>>b;
cout<<"Enter two decimal numbers to be subtracted ";
cin>>c>>d;
 
if(a>b)
{
 diff=a-b;
}
  else
  {
    diff=b-a;
  }

  if(c>d)
{
 diff1=c-d;
}
  else
  {
    diff1=d-c;
  }
cout<<"Difference of the two integers :<<" "<<diff;
cout<<"Difference of the two decimal numbers :<<" "<<diff1;
 
return 0;
}
