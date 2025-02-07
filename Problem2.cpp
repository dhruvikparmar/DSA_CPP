//bubble sort
#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter Aray Size:";
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++)
    {
        cout<<"arr["<<k<<"]"<<" ";
        cin>>arr[k];
    }
    // //find second largest elements in the array
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Second Largest Element is "<<arr[n-2];

    // Find the Missing Number in an Array (1 to N) 
    //      example - Input: arr = [1, 2, 4, 5, 6]
    //Output: 3 --> because 3 is missing
    int a;
    cout << "\nEnter the value of a: ";
    cin >> a;
    
    int array[a - 1];
    cout << "\nEnter the " << a - 1 << " elements (from 1 to N): ";
    for (int i = 0; i < a - 1; i++) {
        cin >> array[i];
    }
    int expectedSum = a * (a + 1) / 2;    
    int actualSum = 0;
    for (int i = 0; i < a - 1; i++) {
        actualSum += array[i];
    }    
    int missNumber = expectedSum - actualSum;
    cout << "The missing number is: " << missNumber << endl;    
    
    
    //  Rotate Array by K Positions 
    // example - Input: arr = [1, 2, 3, 4, 5], K = 2
    // Output: arr = [4, 5, 1, 2, 3]
     // Manually define the array and its size
    // int arr[] = {1, 2, 3, 4, 5};
    int K ;
    cout<<"Enter Position() From Rotate the array: ";//enterd position will remove from last & set from starting
    cin>>K;    
    //K = K % n;  // Handle cases where K > n

    // Step 1: Reverse the whole array
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Step 2: Reverse first K elements
    start = 0, end = K - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Step 3: Reverse remaining elements
    start = K, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print rotated array
    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
