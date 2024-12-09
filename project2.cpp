#include<iostream>
using namespace std;
main()
{
    int cnt=11;   
    // for(int i=41;i<=45;i++)
    // {
    //     for(int j=41;j<=i;j++)
    //     {
    //         cout<<" "<<j<<" ";
    //     }    
    //     cout<<"\n";
    // }
    // for(int i=1;i<=4;i++)
    // {
    //     for(int j=i;j>=1;j--)
    //     {
    //         cout<<" "<<cnt;
    //         cnt++;
    //     }  
    //     cout<<"\n";
    // }
    // for (int i = 5; i>=1 ;i--)
    // {
    //     for (int j = 5; j >=i; j--)
    //     {
    //             cout<<" ";
    //     }
    //     for (int k = 1; k <=i; k++)
    //     {
    //         if(k%2==0)
    //             cout<<"0";
    //         else
    //             cout<<"1";
    //     }
    //     cout<<"\n";
    // }
    // for (int i = 1; i<=5 ;i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         if(j<=i)
    //             cout<<j;
    //         else
    //            cout<<" ";
    //     }
    //     for (int j = 5; j >=1; j--)
    //     {
    //         if(j<=i)
    //            cout<<j;
    //         else
    //             cout<<"  ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
                if(i==1 || i==3)
                    cout<<"*";
                else if(j==1)
                    cout<<"*";
                else if(i==2 && j==5)
                    cout<<"*";
                else 
                    cout<<" ";
        }
        cout<<"\n";
    }
}