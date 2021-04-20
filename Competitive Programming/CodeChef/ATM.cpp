
#include <iostream>
using namespace std;

int main()
{
    int Withdrawal ;
    double Original , Current , charge=0.50;
    
    cin>>Withdrawal;
    cin>>Original;
    
    if(((Withdrawal +charge) <=Original) && (Withdrawal%5==0))
    {
        Current=Original-(Withdrawal+charge);
    cout<<Current;
    }
    else
    {
        cout<<Original;
        }
        return 0;
}
