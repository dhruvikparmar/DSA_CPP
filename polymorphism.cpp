#include<iostream>
using namespace std;
class poly
{
private:
    
public:
    int a,b,c,e,f,add,mul;
    void arith(int a,int b)
    {
        add=a+b;
        cout<<a<<" + "<<b<<" = "<<add<<endl;
    
    }
    void arith(int c,int e,int f)
    {
        mul=c*e*f;
        cout<<c<<" * "<<e<<" * "<<f<<" = "<<mul;
    }

};
main()
{
    poly p;
    p.arith(5,7);
    p.arith(5,6,7);
}