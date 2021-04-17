#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n;
        for(int i=0;i<n;i++)
        {
            cout<<a+i<<" " ;
        }
        cout<<"\n";
    }
	return 0;
}
