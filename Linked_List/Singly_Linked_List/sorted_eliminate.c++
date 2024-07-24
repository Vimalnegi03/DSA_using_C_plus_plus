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
void insertAtHead(Node* &head,int val)
{
    Node *new_node= new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertAtend(Node *& head ,int val)
{
    Node *new_node=new Node(val);
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
}
void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void sort(Node *&head)
{
    Node *current=head;
    while(current!=NULL )
    {
        while(current->next!=NULL && current->val==current->next->val )
        {
            current->next=current->next->next;    
        }
        current=current->next;
    }
}
int main()
{
    // Node *n=new Node(1);
    // cout<<n->val<<" "<<n->next;
    Node *head=NULL;
    insertAtHead(head,1);
    display(head);
     insertAtend(head,2);
     display(head);
      insertAtend(head,2);
      display(head);
      insertAtend(head,3);
      display(head);
      insertAtend(head,3);
      display(head);
      insertAtend(head,3);
      display(head);
      insertAtend(head,4);
      display(head);
       insertAtend(head,4);
      display(head);
       insertAtend(head,5);
      display(head);
      sort(head);
      display(head);

}
