#include<iostream>
using namespace std;

class queue 
{
    public:
    int capacity = 4;
    int *arr = new int[capacity];
    int front = -1, rear = -1;

    void enque() {
        if (rear == capacity - 1)
        {
            cout << "\nQueue is full! Cannot push new element." << endl;
            return;
        }
        if (front == -1 && rear == -1) 
        {
            front++;
            rear++;
            cout << "\nEnter Queue Element: ";
            cin >> arr[rear];
        }
        else 
        {
            rear++;
            cout << "\nEnter Queue Element: ";
            cin >> arr[rear];
        }
        // Print the current elements in the queue
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deque()
    {
        if(front == -1 && rear == -1) 
        {
            cout<<"\nQueue is empty\n";
        }
        else
        {
            front++;
        }
        // if (rear == capacity - 1)
        // {
        //     cout << "Queue is full! Cannot push new element." << endl;
        //     return;
        // }   
        for(int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        } 
    }
    
};
int main() 
{
    queue q;
    q.enque();
    q.enque();
    q.enque();
    q.deque();
    q.enque();
    //q.enque();  // This will show the "Queue is full" message
    return 0;
}
