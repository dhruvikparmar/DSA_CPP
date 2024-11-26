#include<iostream>
using namespace std;
main()
{
    int a,b,c,d;
    cout<<"Enter A:"<<"\n";
    cin>>a;
    cout<<"Enter B:"<<"\n";
    cin>>b;
    cout<<"Enter C:"<<"\n";
    cin>>c;
    (a < b)
    ?((a < c) ? cout<<"A is minimum\n":cout<<"C is minimum\n") 
    :((b < c) ? cout<<"B is minimum\n":cout<<"C is minimum\n");

    cout<<"Enter 1 for English"<<"\n"<<"Enter 2 for Hindi"<<"\n"<<"Enter 3 for Gujrati\n";
    cout<<"Enter Your choice:";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"Enter 1 for internet recharge\n"<<"Enter 2 for top-up recharge\n"<<"Enter 3 for special recharge\n";
        cout<<"Enter Your Choice:";
        cin>>b;
        switch (b)
        {
        case 1:
            cout<<"you have done internet recharge successfully";
            break;
        case 2:
            cout<<"you have done top-up recharge successfully";
            break;
        case 3:
            cout<<"you have done special recharge successfully";
            break;
        default:
            cout<<"Please enter valid number";
            break;
        }
        break;
    case 2:
        cout<<"internet recharge karne k liye 1 dabaiye\n"<<"top-up recharge karne k liye 2 dabaiye\n"<<"special recharge karne k liye 3 dabaiye\n";
        cout<<"Enter Your Choice:";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"aap ka internet recharge ho gaya hai";
            break;
        case 2:
            cout<<"aap ka top-up recharge ho gaya hai";
            break;
        case 3:
            cout<<"aap ka special recharge ho gaya hai";
            break;
        default:
            cout<<"Please enter valid number";
            break;
        }
        break;
    case 3:
        cout<<"internet recharge karva mate 1 dabavo\n"<<"top-up recharge karva mate 2 dabavo\n"<<"special recharge karva mate 3 dabavo\n";
        cout<<"Enter Your Choice:";
        cin>>d;
        switch (d)
        {
        case 1:
            cout<<"tamaru internet recharge safalta-purvak thai gyu chhe";
            break;
        case 2:
            cout<<"tamaru top-up recharge safalta-purvak thai gyu chhe";
            break;
        case 3:
            cout<<"tamaru special recharge safalta-purvak thai gyu chhe";
            break;
        default:
            cout<<"Please enter valid number";
            break;
        }
        break;
    default:
        cout<<"Please enter valid number";
        break;
    }
}