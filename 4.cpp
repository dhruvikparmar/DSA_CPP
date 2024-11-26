#include<iostream>
using namespace std;
main()
{
    //odd-even number
     int a,b;
    cout<<"Enter Number:";
    cin>>a;

    (a%2==0)?cout<<"Number is even":cout<<"Number is odd";


    //print grade
    cout<<"Enter Number:";
    cin>>a;
    
    (a>=90)?cout<<"A class\n":cout<<"B class \n";
    ((a<=89 && a>=80)?cout<<"B class\n":cout<<"c class\n");
    ((a<=79 && a>=70)?cout<<"C class\n":cout<<"D class\n");
    ((a<=69 && a>=60)?cout<<"D class\n":cout<<"E class\n");
    
    //check user can vote or note 
    cout<<"Enter Your Age:";
    cin>>a;

    (a>=18)
        ?cout<<"You are eligible to vote in election\n"
        :cout<<"you aren't eligible to vote in election\n";


    //check year is leap or note

    cout<<"Enter Any Year:";
    cin>>a;
    (a%4==0)
        ?cout<<a<<" "<<"is leap year\n"
        :cout<<a<<" "<<"is not leap year\n";
}