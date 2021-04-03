#include<iostream>
using namespace std;

class Binary
{
private: int  A[100] , mid , UB , LB , i, n , se , loc= -1;
public :  void INP();
         void SORT();
         void DISP();
};

void Binary ::INP ()
{
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter array";
    for(i=0;i<n;i++)
    cin>>A[i];
    cout<<"Enter searc";
    cin>>se;
}

void Binary :: SORT()
{   
    
    UB=n-1;
    LB=0;
    mid=(UB+LB)/2;

    while(LB<=UB)
    {
        if(se==mid)
        {
            loc=mid;
            break;
        }
        else if(se>mid)
        {
            LB=mid+1;
        }
        else
        {
            UB=mid-1;
        }
        
    }
}

void Binary :: DISP()
{
   if(loc>=0)
   {
       cout<<"Element is found at "<<" "<<loc<<"th position";
   }
   else
   {
       cout<<"Element not found";
   }
   
}

int main()
{
    Binary B;
    B.INP();
    B.SORT();
    B.DISP();
    return 0;
}
