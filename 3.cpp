#include<iostream>
using namespace std;
main()
{
    int a,b,c,total,avg;

    cout<<"Enter Value of a:";
    cin>>a;
    cout<<"Enter Value of b:";
    cin>>b;

    if(a>b)
        cout<<"a is maximum\n";
    else
        cout<<"b is maximum\n";

    cout<<"Enter Number:";
    cin>>a;

    if(0>a)
        cout<<"number is negative\n";
    else if(0<a)
        cout<<"number is positive\n";
    else
        cout<<"number is neutral\n";

    
    cout<<"Enter Cpp marks:";
    cin>>a;
    cout<<"Enter Oracle marks:";
    cin>>b;
    cout<<"Enter Cms marks:";
    cin>>c;

    total=a+b+c;
    avg=total*100/300;

    cout<<"Avg is ="<<avg;
}