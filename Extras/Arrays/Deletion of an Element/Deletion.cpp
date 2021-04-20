#include<iostream>
using namespace std;

class deletion 
{
private: int a[100],ele,pos,i,n;
public : void input();
         void remove() ;
         void output();
};

void deletion :: input() 
{
cout<<"Input number of elements: ";
  cin>>n;
cout<<"\nInput array elements:\n"; 
  for (i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter position to be deleted: "; 
  cin>>pos;
}
void deletion :: remove()
{
if(pos>n-1)
{
cout<<"\nInvalid position..."; 
exit(0);
}
  else
{ 
    for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
    n=n-1;
} 
}
void deletion:: output() 
{
cout<<"\nArray elements after deletion\n"; 
  for (i=0;i<n;i++)
cout<<a[i]<<"\t";
}

int main() 
{
deletion D; 
  D.input();
  D.remove(); 
  D.output(); 
  return 0;
}
