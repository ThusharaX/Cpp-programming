#include<iostream>
using namespace std;

class sort
{ 
  private : int a[20],n,pos,i,j,temp;
    public: void input();
            void process(); 
            void output();
};

void sort :: input() 
{
cout<<"Input the number of array elements :"; cin>>n;
cout<<"Input "<<n<<" elements for the array:\n"; for(i=0;i<n;i++)
cin>>a[i];
}

void sort :: process() 
{
for(i=1;i<n;i++) 
{
j = i;
while (j >= 1)
{
if(a[j] < a[j-1])
{
temp = a[j];
a[j] = a[j-1];
a[j-1] = temp; 
}
j=j-1;
}
}
}
void sort :: output() 
{
cout<<"Array elements after sorting is "<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"\t"; 
}

int main() 
{
sort S; 
S.input();
S.process(); 
S.output(); 
return 0;
}
