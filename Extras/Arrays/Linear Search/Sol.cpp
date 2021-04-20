#include<iostream>
using namespace std;
int main(){
    int A[10],n=10,key;
    cout<<"Enter the elements of an array "<<endl;
    for (int i = 1; i <n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the element to search "<<endl;
    cin>>key;
    for (int i = 1; i <n; i++)
    {
        if (key==A[i])
        {
            cout<<"Found at "<<i;
            return 0;
        }
        
    }
    cout<<"Not found"<<endl;
    return 0;
    
    
}
