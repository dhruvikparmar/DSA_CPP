#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node *left;
        node *right;
};
    void preOrder(node *root)
    {
        if(root==NULL)
        {
            return;
        }

        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(node *root)
    {
        if(root==NULL)
        {
            return;
        }

        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }   
    void postOrder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }   

int main()
{
    node *root=new node();
    node *left1=new node();
    node *right1=new node();
    
    // cout<<"Enter Element:";
    root->data=10;
    root->left=left1;
    root->right=right1;
    
    // cout<<"Enter Element:";
    left1->data=20;
    left1->left=new node();
    left1->left->data=21;
    left1->left->left=NULL;

    left1->right=new node(); 
    left1->right->data=22; 
    left1->right->left=NULL;
    left1->right->right=NULL; 

    // cout<<"Enter Element:";
    right1->data=30;
    right1->left=new node();
    right1->left->data=31;
    right1->left->left=NULL;
    right1->right=new node();
    right1->right->data=32;
    right1->right->left=NULL;
    right1->right->right=NULL;
    
    
    cout<<"\nPreorder Data :";
    preOrder(root);
    cout<<"\nInorder Data :";
    inOrder(root);
    cout<<"\nPostorder Data :";
    postOrder(root);

}