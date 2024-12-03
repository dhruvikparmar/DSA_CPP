#include<iostream>
using namespace std;
int countDigit(int n) 
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n/10);
}
int sum_of_first_and_last_digits(int number)
{
    // Extract the last digit
    int last_digit = number % 10;

    // Extract the first digit
    int first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Return the sum of the first and last digits
    return first_digit + last_digit;
}
main()
{
    char A;
    A='A';
    while(A<='Z')
    {
        cout<<""<<A;
        A=A+4;
    }
    cout<<"\n-----------------------------\n\n";
    int n;
    cout<<"Enter Numbers:";
    cin>>n;
    cout<<countDigit(n);
    cout<<"\n---------------------\n\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // Compute the sum of the first and last digits
    int result = sum_of_first_and_last_digits(num);
    // Output the result
    cout << "The sum of the first and last digits is: " << result << endl;
    return 0;
}

    




