// Push(), Pop(), Peek(), display(), isEmpty(), isFull(), size()
#include<iostream>
using namespace std;

/*class stack
{
    public:
        int capacity=4;
        int *arr=new int[capacity];
        int top=-1;

    // void push()
    // {
    //     if(top<(capacity-1))
    //     {
    //         top++;
    //         cout<<"Enter Stack Element:";
    //         cin>>arr[top];
            
    //     }
    //     else
    //     {
    //         cout<<"\nSorry!!Stack is full\n";
    //     }
    // }
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
    void peek()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            cout<<arr[top];
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
    void size()
    {
        cout<<"\nSize of Stack is "<<capacity;        
    }
};*/
main()
{
    int capacity=4;
    int *arr=new int[capacity];
    int top=-1;
    int a;   
    // stack s;
    while(1)
    {
    cout<<"\n1. Push Element\n";
    cout<<"2. Pop Element\n";
    cout<<"3. Peek Element\n";
    cout<<"4. Display Element\n";
    cout<<"5. Size OF Stack\n";
    cout<<"6. Exit\n";
    cout<<"Enter Your Choice:";
    cin>>a;
        switch (a)
        {
            case 1:
                if(top<(capacity-1))
                {
                    for(int i=0;i<=(capacity-1);i++)
                    {
                        top++;
                        cout<<"Enter Stack Element:";
                        cin>>arr[top];
                    }
                }
                else
                {
                    cout<<"\nSorry!!Stack is full\n";
                }
                break;
            case 2:
                if(top==-1)
                {
                    cout<<"Stack is Empty\n";
                }
                else
                {
                    top--;
                    for(int i=top;i>=0;i--)
                    {
                        cout<<arr[i]<<" ";
                    }
                }
                break;
            case 3:
                if(top==-1)
                {
                    cout<<"Stack is Empty\n";
                }
                else
                {
                    cout<<"\n"<<arr[top];
                }
                break;
            case 4:
                if(top==-1)
                {
                    cout<<"Stack is Empty\n";
                }
                else
                {
                    for(int i=top;i>=0;i--)
                    {
                        cout<<arr[i]<<" ";
                    }
                }
                break;
            case 5:
                cout<<"\nSize of Stack is \n"<<capacity;        
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid Choice";
                break;
        }
    }
}