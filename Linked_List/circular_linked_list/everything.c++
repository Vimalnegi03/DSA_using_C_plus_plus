#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int data)
    {
     val=data;
     next=NULL;
    }
};
class Circular{
    public:
    Node *head;
    Node *tail;
    Circular()
    {
        head=NULL;

    }
void insertAtStart(int val)
{
    Node * newnode = new Node(val); 
    if(head==NULL)
    {
    head=newnode;
    newnode->next=newnode;
    }
    Node*tail=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=newnode;
    newnode->next=head;
    head=newnode;
}
void insertAtend(int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
   
   {
    head=newnode;
    newnode->next=head;
   }
    Node *tail=head;
    while(tail->next !=head )
    {
        tail=tail->next;
    }
    tail->next=newnode;
    newnode->next=head;
   
}

//deletion
void deleteAtStart()
{
    Node *tail=head;
    if(head==NULL)
    {
        return;
    }
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=head->next;
    head=head->next;

}
//delete at end
void deleteAtend()
{
    if(head==NULL)
    return;
    Node *tail=head;
    Node *temp=head;
    while(tail->next->next!=head)//pointing to second last node
    {
        tail=tail->next;
    }
    tail->next=temp;

}
void display()
{
    Node*temp=head->next;
    if(head==NULL)
    return;
    cout<<head->val<<"->";
    while(temp!=head)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
   
}
};
int main()
{
    Circular cl;
    cl.insertAtStart(4);
     cl.insertAtStart(5);
      cl.insertAtStart(6);
       cl.insertAtStart(7);
       cl.display();
       cl.insertAtend(8);
       cl.insertAtend(9);
       cl.insertAtend(10);
       cl.display();
       cl.deleteAtStart();
       cl.display();
       cl.deleteAtend();
       cl.display();

}
