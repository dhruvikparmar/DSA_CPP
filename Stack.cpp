#include<iostream>
using namespace std;

class stack
{
    public:
        int *arr=new int[capacity];
        int top=-1;
        int capacity=4;

    void push()
    {
        if(top<=2)
        {
            top++;
            cout<<"Enter Stack Element:";
            cin>>arr[top];
        }
        else
        {
            cout<<"\nSorry!!Stack is full\n";
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            top--;
        }
    }        
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
};
main()
{
    int a;   
    stack s;
    cout<<"1. Push Element\n";
    cout<<"2. Pop Element\n";
    cout<<"3. Display Element\n";
    cout<<"4. Exit";
    cout<<"Enter Your Choice:";
    cin>>a;
    while(a!=0)
    {
        switch (a)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid Choice";
        }
    }
}