#include<iostream>
using namespace std;

class MAXI
{
 private: int a , b, max , min;
 public: void IN(); void COMP(); void DIS();
};

void MAXI :: IN()
{
    cout<<"Enter two integers "<<endl;
    cin>>a>>b;
}

void MAXI :: COMP()
{
    if(a>b)
    {
        max=a;
        min=b;
    }
    else if(b>a)
    {
        max=b;
        min=a;
    }
    else
    {
        cout<<"Both numbers are equal";
    }
    
}

void MAXI :: DIS()
{
    cout<<"The Maximum and Minimum of the two numbers are :"<<" "<<max<<" "<<min;
}

int main()
{
    MAXI M;
    M.IN();
    M.COMP();
    M.DIS();

    return 0;
} 
