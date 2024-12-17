#include<iostream>
using namespace std;
main()
{
    // int a,value;
    // cout<<"Enter Array size:";
    // cin>>a;
    // for(int k=0;k<a;k++)
    // {
    //     cout<<"a["<<k<<"]=";
    //     cin>>value;
    // }
    // if(value<0)
    //     cout<<"\tNegative Values:"<<value;
    // else
    //     cout<<"No Negative values in this array\n";
    
    // int n; 
    // cout << "Enter the array's row & column size: ";
    // cin >> n;
    // int b[n][n]; 
    // cout << "Enter array's elements:\n";
    // for (int i = 0; i < n; i++) 
    // {
    //     for (int j = 0; j < n;j++) 
    //     {
    //         cout << "a[" << i << "][" << j << "] = ";
    //         cin >> b[i][j];
    //     }
    //     cout<<"\n";
    // }
    // int largest = b[0][0];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (b[i][j] > largest) {
    //             largest = b[i][j];
    //         }
    //     }
    // }
    // cout << "The largest element in the 2D array is: " << largest << endl<<endl;

    // int rows, cols;
    // cout << "Enter the number of rows: ";
    // cin >> rows;
    // cout << "Enter the number of columns: ";
    // cin >> cols;
    // int arr[rows][cols];
    // cout << "Enter the elements of the matrix:" << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> arr[i][j];
    //     }
    // }
    // int transpose[cols][rows];  
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         transpose[j][i] = arr[i][j];
    //     }
    // }
    // cout << "\nOriginal Matrix:" << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "\nTransposed Matrix:" << endl;
    // for (int i = 0; i < cols; i++) {
    //     for (int j = 0; j < rows; j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int c, s;
    cout << "Enter the array's row & column:";
    cin >> c >> s;

    int arr3[c][s];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr3[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
    int row, sum = 0;
    cout << "Enter row number:";
    cin >> row;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == row)
            {
                cout << arr3[i][j] << "\t";
                sum += arr3[i][j];
            }
        }
    }
    cout << "sum of row=" << sum << endl;

    int col, sum1 = 0;
    cout << "Enter column number:";
    cin >> col;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (j == col)
            {
                cout << arr3[i][j] << "\t";
                cout << endl;
                sum1 += arr3[i][j];
            }
        }
    }
    cout << "sum of column=" << sum1;
}