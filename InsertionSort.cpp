#include<iostream>
using namespace std;
main()
{
    int arr[]={12,11,13,5,6};
    /*        temp,arr[i]                
        i=11,
        12>0 && 11<12

    */
    for(int i=1; i<5; i++)
    {
        int temp=i-1;//temp=1-1=0 temp=12
        int key=arr[i];
        while(temp>=0 && key<arr[temp])//12>0 && 11<12
        {
            arr[temp+1]=arr[temp];//arr[0+1=1]=arr[0]
            temp--;
            
        }
            arr[temp+1]=key;//arr[0+1=1]=arr[0]
        // cout<<"temp="<<temp<<" i="<<arr[i];
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}