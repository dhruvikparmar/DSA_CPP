#include<iostream>
using namespace std;
main()
{
    //odd-even number
     int a,b;
    cout<<"Enter Number:";
    cin>>a;

    if(a%2==0)
        cout<<"Number is even\n";
    else
        cout<<"Number is odd\n";


    //print grade
    cout<<"Enter Number:";
    cin>>a;
    
    if(a>=90)
        cout<<"A class\n";
    else if(a<89 && a>80)
        cout<<"B class\n";
    else if(a<79 && a>70)
        cout<<"C class\n";
    else if(a<69 && a>=60)
        cout<<"D class\n";
    else
        cout<<"F class\n";


    //check user can vote or note 
    cout<<"Enter Your Age:";
    cin>>a;

    if(a>=18)
        cout<<"You are eligible to vote in election\n";
    else
        cout<<"you aren't eligible to vote in election\n";


    //check year is leap or note

    cout<<"Enter Any Year:";
    cin>>a;
    if(a%4==0)
        cout<<a<<" "<<"is leap year\n";
    else
        cout<<a<<" "<<"is not leap year\n";

}