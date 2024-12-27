#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
        string name;
        string surname;
        int age;
        int gr_id;
        string city;
            void getdata()
            {
                cout<<"Enter Name:";
                cin>>name;
                cout<<"Enter Surname:";
                cin>>surname;
                cout<<"Enter Age:";
                cin>>age;
                cout<<"Enter Gr_id:";
                cin>>gr_id;
                cout<<"Enter City:";
                cin>>city;
            }
            void setdata()
            {
                cout<<"Name:"<<name<<"\n"
                <<"Surname:"<<surname<<"\n"
                <<"Age:"<<age<<"\n"
                <<"Gr_id:"<<gr_id<<"\n"
                <<"City:"<<city<<"\n";
            }
};
main()
{
    student s;
    for(int i=0;i<8;i++)
    {
        s.getdata();
        s.setdata();
    }
    
}