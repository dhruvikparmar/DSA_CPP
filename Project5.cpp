#include<iostream>
using namespace std;
class bank_account
{
    public:
        double depo,with;
        int a,balance; 
        int acc_no;
        int acct_balance;
        char acc_holder;
    
    void deposit()
    {  
        cout<<"\nEnter Amount To Deposit:";
        cin>>depo;
    }
    void withdraw()
    {
        cout<<"\nEnter Amount To Withdraw:";
        cin>>with;
        if(depo>with)
            cout<<"Withdraw successfully approved";
        else
        {
            cout<<"\nSorry !! Unavailabel balance ";
        }
    }
    void getbalance()
    {
        balance=depo-with;
        cout<<"\nCurrent Balance "<<balance;
    }
    void display_acc_info()
    {
        cout<<"\n\nBalance before withdraw:"<<depo;
        balance=depo-with;
        cout<<"\nAmount To withdraw:"<<with;
        cout<<"\nCurrent Balance:"<<balance;
    } 
};
class saving_account:public bank_account
{
    public:
            float interest_rate,percentage;
            int days;
    void calculate_interest_rate()
    {
        cout<<"Enter Amount:";
        cin>>balance;
        cout<<"\nEnter Percentage(%) :";
        cin>>percentage;
        cout<<"\nEnter days:";
        cin>>days;
        interest_rate=(balance*days*percentage)/(365*100);
        cout<<"Interest_rate is "<<interest_rate<<"\n";
    }

};
class checking_account:public bank_account
{
    public:
            int od,current_balance;
    void overdraft()
    {
        cout<<"\nEnter Amount To Deposit:";
        cin>>depo;
        cout<<"\nEnter Amount for withdraw:";
        cin>>od;
        if(depo<od)
            cout<<"\nOverdraft of "<<od<<" Successfully Granted";
        current_balance=depo-od;
        cout<<"\nCurrent Balance:"<<current_balance;
    }
};
class fd_account:public bank_account
{   
    public:
        float percentage2,interest_rate2;
        int days2,balance2;
    void calculate_interest_rate2()
    {
        cout<<"Enter Amount:";
        cin>>balance2;
        cout<<"\nEnter Percentage (%) :";
        cin>>percentage2;
        cout<<"\nEnter days:";
        cin>>days2;
        interest_rate2=(balance2*days2*percentage2)/(365*100);
        cout<<"Interest_rate is "<<interest_rate2<<"\n";
    }
    
};
main()
{
    int a;
    bank_account b;
    saving_account s;
    checking_account c;
    fd_account f;
    cout<<"\n1.Enter 1 for Deposit,Withdraw,Getbalance,Display_acc_info:";
    cout<<"\n2.Enter 2 for Calculation of interest for Saving account:";
    cout<<"\n3.Enter 3 for Overdraft:";
    cout<<"\n4.Enter 4 for Calculation of interest fd account:";
    cout<<"\n5.Enter 0 for Exit:";
    cout<<"\nEnter Your Choice:";
    cin>>a;
    while(a!=0)
    {
    
        switch(a) 
        {
            case 1:
                    b.deposit();
                    b.withdraw();
                    b.getbalance();
                    b.display_acc_info();
                    
                    break;
            case 2:
                    s.calculate_interest_rate();
                    break;                    
            case 3:
                    c.overdraft();
                    break;
            case 4:
                    f.calculate_interest_rate2();
                    break;
            case 5:
                    exit(0);        
            default:
            a=0;
                    cout<<"invalid choice";
        }
    cout<<"\n1.Enter 1 for Deposit,Withdraw,Getbalance,Display_acc_info:";
    cout<<"\n2.Enter 2 for Calculation of interest for Saving account:";
    cout<<"\n3.Enter 3 for Overdraft:";
    cout<<"\n4.Enter 4 for Calculation of interest fd account:";
    cout<<"\n5.Enter 0 for Exit:";
    cout<<"\nEnter Your Choice:";
    cin>>a;
    }
}