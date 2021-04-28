#include<iostream>
using namespace std;

int a , b , ch , sum=0 , diff=0 , prod=1 , division=1;
string S;


void ADD()
{

    sum=a+b;
    cout<<"Sum of "<<a<<" "<<b<<" "<<"is :"<<" "<<sum<<endl;
    cout<<"Go to main menu ?";
    cin>>S;
    if(S=="YES" || S=="yes"|| S=="YeS")
    {
        void IN();
    }
    else
    {
        cout<<"/////Terminated//////";
        exit(0);
    }
    
}

void  SUB()
{

    diff=a-b;
    cout<<"Difference of "<<a<<" "<<b<<" "<<"is :"<<" "<<diff<<endl;
    cout<<"Go to main menu ?";
    cin>>S;
    if(S=="YES" || S=="yes"|| S=="YeS")
    {
        void IN();
    }
    else
    {
        cout<<"/////Terminated//////";
        exit(0);
    }
    
}

void  MUL()
{

    prod=a*b;
    cout<<"Product of "<<a<<" "<<"and"<<" "<<b<<" "<<"is :"<<" "<<prod<<endl;
    cout<<"Go to main menu ?";
    cin>>S;
    if(S=="YES" || S=="yes"|| S=="YeS")
    {
        void IN();
    }
    else
    {
        cout<<"/////Terminated//////";
        exit(0);
    }
    
}

void  DIV()
{

    division=a/b;
    cout<<"Division of "<<a<<" "<<"by"<<" "<<b<<" "<<"is :"<<" "<<division<<endl;
    cout<<"Go to main menu ?";
    cin>>S;
    if(S=="YES" || S=="yes"|| S=="YeS")
    {
        void IN();
    }
    else
    {
        cout<<"/////Terminated//////";
        exit(0);
    }
    
}

int main()
{
    
    

    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter two Integers";
    cin>>a>>b;
    cout<<endl;

    cout<<"Enter choice";
    cin>>ch;


    if(ch==1)
    {
       void ADD();

    }
    else if (ch==2)
    {
       void  SUB();

    }
    else if(ch==3)
    {
       void  MUL();

    }
    else if (ch==4)
    {
       void  DIV();

    }
    else if(ch==5)
    {
        cout<<"/////Terminated//////";
        exit(0);
    }
    else
    {
        cout<<"Invalid entry , try again"<<endl;
        
    }
    
    return 0;
}
