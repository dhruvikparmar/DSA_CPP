//bubble sort
#include<iostream>
using namespace std;
main()
{
    // int arr[]={8,4,6,2,1};
    int n;
    cout<<"Enter Aray Size:";
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++)
    {
        cout<<"arr["<<k<<"]"<<" ";
        cin>>arr[k];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
}
