#include<iostream>
using namespace std;
main()
{
    int s;
    cout<<"Enter Array Size:";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cout<<"a["<<i<<"]-->";
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        cout<<" "<<a[i];
    }
    for(int i=1; i<5; i++)
    {
        int temp=i-1;//temp=1-1=0 temp=12
        int key=a[i];
        while(temp>=0 && key<a[temp])//12>0 && 11<12
        {
            a[temp+1]=a[temp];//arr[0+1=1]=arr[0]
            temp--;
        }
        a[temp+1]=key;//arr[0+1=1]=arr[0]
        // cout<<"temp="<<temp<<" i="<<arr[i];
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}