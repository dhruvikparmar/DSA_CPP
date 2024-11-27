#include<iostream>
using namespace std;
main()
{
    int a=1;
    while(a<=10)
    {
        cout<<a<<"\t";
        a++;
    }
    cout<<"\n";


    int b=10;
    while(b>=1)
    {
        cout<<b<<"\t";
        b--;
    }
    cout<<"\n";


    int c;
    cout<<"Enter Any Number:";
    cin>>c;
    int d=1;
    while(d<=c)
    {
        cout<<d;
        d++;
    }
    cout<<"\n";


    int n;
    cout<<"Enter Any Number:";
    cin>>n;
    while(n>=1)
    {
        if(n%2!=0)
            cout<<n<<"\t";
        n--;
    }
    cout<<"\n";


    int x,y;
    cout<<"Enter Year 1:";
    cin>>x;
    cout<<"Enter Year 2:";
    cin>>y; 
    int z;
    while(x<=y)
    {
        if((x%4==0 && x%100!=0) || (x%400==0))
            cout<<x<<"\t";  
        x++;
    }
}