#include<iostream>
using namespace std;

class SIMPLE
{
private :
long int P; int T ; float R , SI;
public :
void input();
void calculate(); void output();
};

void SIMPLE :: input() 
{
cout<<” Input Principle amount , Time and Rate of Interest”; cin>>P>>T>>R;
}

void SIMPLE :: calculate()
{
SI = (P * T * R)/100.0; 
}

void SIMPLE :: output()
{
cout<<”\nThe Simple Interest = “<<SI;
}

int main() 
{
SIMPLE S; 
S.input();
S.calculate();
S.output();

return 0;
}
