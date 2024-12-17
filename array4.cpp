#include <iostream>
using namespace std;
main() 
{
    int n; 
    cout << "Enter the array's row & column size: ";
    cin >> n;
    int a[n][n]; 
    cout << "Enter array's elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout<<"\n";
    }
    int sum = 0,esum=0,osum=0,lsum=0,rsum=0,dsum=0;
    for (int i = 0; i < n; i++){ 
        for(int j=0;j<n;j++)
        {
            sum += a[i][j]; 
        }}
    for (int i = 0; i < n; i++){ 
        for(int j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
                {
                    esum += a[i][j];
                }
        }}
    for (int i = 0; i < n; i++){ 
        for(int j=0;j<n;j++)
        {
            if(a[i][j]%2!=0)
                {
                    osum += a[i][j];
                }
        }}
    for (int i = 0; i < n; i++){ 
            lsum += a[i][0];
            }
    for (int j = 0; j < n; j++){ 
        rsum += a[j][2];
            }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
                cout<<a[i][j]<<"\t";    
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++){
           if(i==j){
            dsum+=a[i][j];
           } 
           else if((i+j==2))
           {
             dsum+=a[i][j];
           }
        }
        
    }
    cout << "The sum all elements of the Array: " << sum << endl;
    cout << "The sum of even index of elements of the Array: " << esum << endl;
    cout << "The sum of odd index of elements of the Array: " << osum << endl;
    cout << "The sum of left elements of the Array: " << lsum << endl;
    cout << "The sum of right elements of the Array: " << rsum << endl;
    cout << "The sum of both diogonal elements of the Array: " << dsum << endl;
}