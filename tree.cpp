#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left; 
    node *right;


node(int val)
{
    data= val;
    left=right=NULL;
}
};
node* insert(node* root, int val) { 
    if (root == NULL) return new node(val); 
    if (val < root->data) root->left = insert(root->left, val); 
    else root->right = insert(root->right, val); 
    return root; 
    } 
//for print the treee
void print(node *root)
{
    if (root!=NULL)
    {
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
}
int main()
{
  
  node *root=new node(10);
  root->left=new node(4);
  root->right=new node(2); 
  insert(root,12);
  
  print(root);
return 0;
}