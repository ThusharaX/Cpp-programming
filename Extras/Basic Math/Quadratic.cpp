#include<iostream>
using namespace std;

class QUADRATIC
{
private :
float a,b,c,d ,r1,r2,r; 
public:
void input();
void calculate();
};

void QUADRATIC :: input() 
{
cout<<” Input the co-efficients of the quadratic equation >0 ”; cin>>a>>b>>c;
}

void QUADRATIC :: calculate() 
{
d = (b*b) – (4*a*c);
if (d>0)
{
cout<<”The roots are REAL and DISTINCT”;
r1=(-b + (sqrt(d)) / (2*a); r2=(-b - (sqrt(d)) / (2*a);
cout<<”\nFirst root = “<<r1;
cout<<”\nSEcond root = “<<r2; 
}
else if (d==0)
{
cout<<”The roots are REAL and EQUAL”; r=(-b ) / (2*a);
cout<<”\nThe root = “<<r;
cout<<”\nThe roots are IMAGINARY”; 
}
else 
{
cout<<”\nThe roots are IMAGINARY”;
}
}

int main()
{
QUADRATIC Q; 
Q.input(); 
Q.calculate();
return 0;
}
