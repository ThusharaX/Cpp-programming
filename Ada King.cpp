#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int r, c, k, x=1, y=1;
	    cin>>r>>c>>k;
	    --r; --c;
	    for(int i=1; i<=k; i++)
	    {
	        if((r+i)<8)
	        ++y;
	        
	        if((r-i)>=0)
	        ++y;
	        
	        if((c+i)<8)
	        ++x;
	        
	        if((c-i)>=0)
	        ++x;
	    }
	    cout<<x*y<<endl;
	}
	return 0;
}
