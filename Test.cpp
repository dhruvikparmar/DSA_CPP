#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //Write a function to calculate the factorial of a given number.
    
    int n;
    long f=1;
    cout<<"Enter Any Number to Find factorial:";
    cin>>n;
    if(n<0)
        cout<<"Sorry ! can't find factorial";
    else
    {
        for(int i=1;i<=n;i++)
            f =f*i;
    } 
    cout<<"Factorial of "<< n <<" is "<< f;


    //Write a function to check whether a number is a palindrome.


    //Write a program to demonstrate the use of pointers by displaying the address and value of a variable.
    int *ptr,p=20;
    ptr=&p;
    cout<<"\nAddress of p is "<<ptr<<" \n Value of p is "<<*ptr; 
    
    
    //Write a program to swap two numbers using pointers.
    
    int *a=new int,*b=new int;
    int temp;
    cout<<"\nEnter Num 1:";
    cin>>*a;
    cout<<"\nEnter Num 2:";
    cin>>*b;
    
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nValue After Swaping";            
    cout<<"\nNum1="<<*a;
    cout<<"\n Num2="<<*b;
    
    
    //Write a program to find the largest and smallest elements in an integer array.
    // int ar;
    // cout<<"Enter array size:";
    // cin>>ar;
    // int b[ar];
    // for(int i=0;i<ar;i++)
    // {
    //     cout<<"Enter Array Elements:";
    //     cin>>b[i];
    // }
    // int max=b[0];
    // int min=b[0];
    // for(int i=0; i<ar;i++)
    // {
    //     if(b[i]>max)
    //         max=b[i];
    //     else
    //         min=b[i];
    // }
    // cout<<"max = "<<max<<endl;
    // cout<<"min = "<<min;
    
    //Write a program to reverse the elements of an array without using any extra array.(Use vector here)
    vector <int> vec;
    int e;
    cout<<"\nEnter Vector Element:";
    cin>>e;
    cout<<"\nEnter "<<e<<" Elements:";
    for(int i=0;i<e;i++)
    {
        int b;
        cin>>b;
        vec.push_back(b);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    reverse(vec.begin(), vec.end());
    cout <<"\nReversed vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}