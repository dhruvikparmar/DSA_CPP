#include<iostream>
using namespace std;
main()
{
    int a[7]={10,18,24,36,46,58,66};
    int left=0,target;
    int right=7-1;
     int count=0;
    cout<<"Enter Element to find:";
    cin>>target;
    while(left<right)
    {
        int mid=(left+right)/2;
        if(a[mid]==target)
        {
            count=1;
            cout<<"Target Founded";
            break;
        }
        else if(a[mid]<target)
        {
            left=mid+1;   
        }
        else
        {
            right=mid-1;
        }
    }    
    if(count==0){
        cout<<" not found";
    }
    // else{
    //     cout << " found";
    // }
    // if(target==left || target==right)
    //     cout<<"targeted element is found at "<< a <<"index";
    // else
    //     cout<<"targeted element is not found";
}