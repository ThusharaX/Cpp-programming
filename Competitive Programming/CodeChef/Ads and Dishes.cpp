#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int> ());
    int b1=0;
    int b2=0;
    for(int i=0;i<n;i++)
    {
        if(b1<b2)
        {
            b1+=a[i];
        }
        else
        {
            b2+=a[i];
        }
    }
    int ans = max(b1,b2);
    cout<<ans<<"\n";
    }
	return 0;
}
