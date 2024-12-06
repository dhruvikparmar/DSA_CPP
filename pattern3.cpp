#include<iostream>
using namespace std;
main()
{
    char count='A';
    int cnt=1;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 5; j >=i; j--)
        {
            if(j%2==0)
                cout<<"0";
            else
                cout<<"1";
        }    
        cout<<"\n";
    }
    for(char i=65;i<=69;i++)
    {
        for(char j=i;j>=65;j--)
        {
            cout<<j;
            count++;
        }
        cout<<"\n";
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<cnt;
            cnt++;
        }  
        cout<<"\n";
    }
}