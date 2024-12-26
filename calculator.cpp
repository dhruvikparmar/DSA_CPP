#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;    
}
int min(int a,int b)
{
    return a-b;    
}
int multi(int a,int b)
{
    return a*b;    
}
int divi(int a,int b)
{
    return a/b;    
}
int mod(int a,int b)
{
    return a%b;    
}
main()
{
    int a,b,c,result;
    cout<<"Enter Number 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
    cout<<"\n1. Press 1 for +";
    cout<<"\n2. Press 2 for -";
    cout<<"\n3. Press 3 for *";
    cout<<"\n4. Press 4 for /";
    cout<<"\n5. Press 5 for %";
    cout<<"\n6. Press 0 for exit";
    cout<<"\n Enter Your Choice:";
    cin>>c;
    switch (c)
    {
        case 1:
            result=sum(a,b);
            cout<<"Sum of "<<a<<" & "<<b<<"  is"<<result;
            break;
        case 2:
            result=min(a,b);
            cout<<"Subtraction of "<<a<<" & "<<b<<"  is"<<result;
            break;
        case 3:
            result=multi(a,b);
            cout<<"Multiplication of "<<a<<" & "<<b<<"  is"<<result;
            break;
        case 4:
            result=divi(a,b);
            cout<<"Divison of "<<a<<" & "<<b<<"  is"<<result;
            break;
        case 5:
            result=mod(a,b);
            cout<<"Modulus of "<<a<<" & "<<b<<"  is"<<result;
        case 6:
            exit(0);
        default:
            cout<<"Invalid choice";
    }
}