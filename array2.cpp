#include<iostream>
using namespace std;
main()
{
    int a;
    cout<<"Enter array size:";
    cin>>a;
    int b[a];
    
    for(int i=0;i<a;i++)
    {
        cout<<"Enter Array Elements:";
        cin>>b[i];
    }
    // for( int i=0;i<a;i++)
    //     cout<<" "<<b[i];
    // cout<<"\n----------------------\n";
    // cout<<"Enter array size:";
    // cin>>a;
    // for(int i=0;i<a;i++)
    // {
    //     cout<<"Enter Array Elements:";
    //     cin>>b[i];
    // }
    // int total=0;
    // for(int i=0;i<a;i++)
    //     total=total+b[i];
    // cout<<"Sum of array is"<<" "<<total;
    // cout<<"\n----------------------\n";
    // cout<<"Enter array size:";
    // cin>>a;
    // for(int i=0;i<a;i++)
    // {
    //     cout<<"Enter Array Elements:";
    //     cin>>b[i];
    // }
    // int ttl=0;
    // for(int i=0;i<a;i++){
    //     if(i%2==0)
    //        ttl=ttl+b[i];
    // }
    // cout<<"Sum of even indexes is"<<" "<<ttl;
    // cout<<"\n----------------------\n";
    // int min=0,max=0;
    // for(int i=0;i<a;i++){
    //     if(i%2==0)
    //         ttl=ttl+b[i];
    // }
    // cout<<"\n----------------------\n";
    int max=b[0];
    int min=b[0];
    for(int i=0; i<a;i++)
    {
        if(b[i]>max)
            max=b[i];
        else if(b[i]<min)
            min=b[i];
        else
            cout<<"min value and max value are same";
    }
    cout<<"max = "<<max<<endl;
    cout<<"min = "<<min;
}
