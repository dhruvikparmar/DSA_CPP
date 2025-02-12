#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int temp=i-1;
        int key=arr[i];
        while(temp>=0 && key<arr[temp])//12>0 && 11<12
        {
            arr[temp+1]=arr[temp];//arr[0+1=1]=arr[0]
            temp--;
        }
        arr[temp+1]=key;//arr[0+1=1]=arr[0]
    }
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<" "<<arr[j];
    }
    cout<<"\n ---- Binary Search ---- ";
    int left=0,target;
    int right=7-1;
    int count=0;
    cout<<"\nEnter Element to find:";
    cin>>target;
    while(left<right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
            count=1;
            cout<<"\nTarget Founded";
            break;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;   
        }
        else
        {
            right=mid-1;
        }
    }    
    if(count==0){
        cout<<"\nnot found";
    }
    cout<<"\n ---- Linear Search ---- ";
    cout<<"\nEnter Element to find:";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Target Founded";
            count=1;
            break;
        }
        else
        {
            cout<<"Target Not Found";
            break;
        }
    }
}