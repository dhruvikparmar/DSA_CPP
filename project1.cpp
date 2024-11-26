#include<iostream>
using namespace std;
main()
{
    int a,b;
    char A;
    cout<<"1 for 90-81 marks\n";
    cout<<"2 for 80-71 marks\n";
    cout<<"3 for 70-61 marks\n";
    cout<<"4 for 60-51 marks\n";
    cout<<"5 for 50-41 marks\n";
    cout<<"Enter Your Choice:"<<"\n";
    cin>>a;
    switch(a)
    {
    case 1:
        cout<<"Your Grade is A,because you marks is between 90-81\n";
        break;
    case 2:
        cout<<"Your Grade is B,because you marks is between 80-71\n";
        break;
    case 3:
        cout<<"Your Grade is C,because you marks is between 70-61\n";
        break;
    case 4:
        cout<<"Your Grade is D,because you marks is between 60-51\n";
        break;
    case 5:
        cout<<"Your Grade is E,because you marks is between 50-41\n";
        break;
    default:
        cout<<"Sorry !! please enter valid choice\n";
        break;
    }

    cout<<"a for 90-81 marks\n";
    cout<<"b for 80-71 marks\n";
    cout<<"c for 70-61 marks\n";
    cout<<"d for 60-51 marks\n";
    cout<<"e for below marks\n";
    cout<<"Enter Your Choice:"<<"\n";
    cin>>A;
    switch(A)
    {
    case 'a':
        cout<<"Your Grade is A,Excellent Work\n";
        break;
    case 'b':
        cout<<"Your Grade is B,well-done\n";
        break;
    case 'c':
        cout<<"Your Grade is C,good job\n";
        break;
    case 'd':
        cout<<"Your Grade is D,You Passed but you could do better\n";
        break;
    case 'e':
        cout<<"Your Grade is E,sorry !!, you failed..\n";
        break;
    default:
        cout<<"Sorry !! please enter valid choice";
        break;
    }

    cout<<"Enter Marks:"<<"\n";
    cin>>a;

    if(a>=50)
        cout<<"Congratulations! You are eligible for the next level";
    else
        cout<<"Please try again next time";
}