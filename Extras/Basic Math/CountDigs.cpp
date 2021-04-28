#include<iostream>
using namespace std;


int countDigit(long n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int long a,b;
    cout<<"Enter the number"<<endl;
    cin>>a;
    b=countDigit(a);
    cout<<b<<endl;

    return 0;
}
