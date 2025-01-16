#include <iostream>
#include <vector>
using namespace std;
main() 
{
        vector<int> vec;
    while(1)
    {
        int a;
        cout<<"\n1.Enter 1 for Create:";
        cout<<"\n2.Enter 2 for Insert:";
        cout<<"\n3.Enter 3 for Read:";
        cout<<"\n4.Enter 4 for Update:";
        cout<<"\n5.Enter 5 for Delete:";
        cout<<"\n6.Enter 0 for Exit:";
        cout<<"\nEnter Your Choice:";
        cin>>a;
        int element;
        switch(a)
        {
            case 1:
                int n;  
                cout << "\nEnter the number of elements: ";
                cin >> n;
                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    int b;
                    cin >> b;  
                    vec.push_back(b); 
                }
                cout << "The elements in the vector are:\n";
                for (int i = 0; i <vec.size(); i++) {
                    cout << vec[i] << " ";
                }
                break;

            case 2:
                cout << "Enter an element to add to the vector: ";
                cin >> element;
                vec.push_back(element);
                cout << "Element added successfully!\n";
                
                for(int i=0;i<vec.size();i++)
                {
                    cout<<vec[i] << " ";
                }
                break;
            case 3:
                    if(vec.empty())
                    {
                        cout<<"Vector is empty";
                    }
                    else
                    {
                        // cout << vec.size() << endl;
                        for(int i=0;i<vec.size();i++)
                        {
                            cout<<vec[i] << " ";
                        }
                    }
                    break;
            case 4:
                    int c,d;
                    if(vec.empty())
                    {
                        cout<<"Vector is empty";
                    }
                    else
                    {
                        cout<<"Enter Position for update element:";
                        cin>>c;
                        cout<<"Enter Element to update:";
                        cin>>d;
                        vec.insert(vec.begin()+c,d);
                        for(int i=0;i<vec.size();i++)
                            {
                                cout<<vec[i] << " ";
                            }
                    }
                    break;
            case 5:
                    if(vec.empty())
                    {
                        cout<<"Vector is empty";
                    }
                    else
                    {
                        vec.clear();
                        cout<<"All Elements of Vector's are delete successfully";
                    }
                    break;
            case 0:
                    exit(0);            
            default:
                    cout<<"Invalid choice";
                    break;
        }
    }
}