#include<iostream>
 using namespace std;
 struct node

 {
    int data;
    node *next;
 };
 void printlist(node *head){
    node *temp=head;
    while (temp!=NULL)    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<NULL;
    
 }
 int main()
 {
    node *head=new node{10,NULL};
    head->next=new node{20,NULL};
    head->next->next=new node{30,NULL};


    printlist(head);
    return 0;
 }
 