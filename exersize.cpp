// Write a program to find if a number is prime or not  ( take input from user )
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cout<<"Enter Number :";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is Not Prime number"; 
        exit(1);
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(n % i==0)
            {
                cnt++;
            }
        }
    }
    if(cnt<2)
    {
        cout<<n<<" is Prime number"; 
    }
    else
    {
        cout<<n<<" is Not Prime number"; 
    }


//Write a program that counts how many vowels (a, e, i, o, u) are in a given string.
int vowels=0;
char str[100];
cout<<"\nEnter String:";
cin>>str;
for(int i =0; str[i]; i++)  
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'
        || str[i]=='A' || str[i]=='E'|| str[i]=='I'|| str[i]=='O' || str[i]=='U')
        {
		    vowels++;
        }
    }
cout<<" Vowels in enterd string is "<<vowels;


//Write a program that Reverse a String using a Loop

string name;
cout<<"\nEnter String:";
cin>>name;
for(int i = 0;i < name.length();i++){
        cout << name.at(i);
    }
    cout<<endl;
for(int i = name.length()-1 ;i >-1; i--){
        cout << name.at(i);
    }
return 0;
}