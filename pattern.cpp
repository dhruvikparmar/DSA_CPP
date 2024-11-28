
#include<iostream>
using namespace std;
main()
{
/*  1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1  */


    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }


/*  5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5  */

    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=a;b<=5;b++)
        {
            cout<<b;
        }
        cout<<"\n";
    }

/*  5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1  */ 

    int x,y;
    for(x=5;x>=1;x--)
    {
        for(y=x;y<=5;y++)
        {
            cout<<x;
        }
        cout<<"\n";
    }

     
    /*  1 2 3 4 5
        2 3 4 5
        3 4 5
        4 5
        5  */

    int m,n;
    for(m=1;m<=5;m++)
    {
        for(n=m;n<=5;n++)
        {
            cout<<n;
        }
        cout<<"\n";
    }

    /*  1 1 1 1 1
        2 2 2 2
        3 3 3
        4 4 
        5    */

    int c,d;
    for(c=1;c<=5;c++)
    {
        for(d=5;d>=c;d--)
        {
            cout<<c;
        }
        cout<<"\n";
    }   
}
