#include<iostream>
using namespace std;
main()
{
    int n,value;
    cout<<"Enter array size:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>value;
    }
    cout<<"Length of array:"<<n<<"\n";
    cout<<"---------------------------------";
    // int a;
    // cout<<"Enter array size:";
    // cin>>a;
    // int b[a],i;
    // for( i=0;i<a;i++)
    // {
    //     cout<<"Enter Array Elements:";
    //     cin>>b[i];
    // }
    // int total=0;
    // for(i=0;i<a;i++)
    //     total=total+b[i];
    // int avg=0;
    // avg=total/a;
    // cout<<"Avg"<<avg;
    cout<<"\n-------------------------------------\n";
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[3];

    for(int i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        cout<<c[i];
    }
}