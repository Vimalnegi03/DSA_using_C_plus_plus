Program-:TO DELETE ALTERNATE nodes
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
//insertion at kth position
void insertAtpos(Node* &head,int val,int pos)
{
    Node *new_node=new Node(val);
    Node*p=head;
    Node*q=head->next;
 for(int i=1;i<pos-1;i++)
 {
    p=p->next;
    q=q->next;
 }
 p->next=new_node;
 new_node->next=q;
}
//insertion at end
void insertAtend(Node*& head ,int val)
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
//update at the kth position
void updateKth(Node* &head,int val,int pos)
{
    Node*temp=head;
    for(int i=0;i<pos;i++)
    {
      temp=temp->next;
    }
    temp->val=val;
}
//delete alternate node
void deleteAlternate(Node * &head)
{
  
        Node *current=head;
       while(current!=NULL && current->next!=NULL)
       {
        Node *temp=current->next;//this is the node to be deleted 
        current->next=current->next->next;
        free(temp);//to delete that node
        current=current->next;

       }
    }



//display
void display(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,10);
    display(head);
    insertAtHead(head,15);
    display(head);
    insertAtend(head,20);
    display(head);
     insertAtHead(head,25);
     display(head);
    insertAtHead(head,30);
    display(head);
    insertAtHead(head,35);
    display(head);
    insertAtend(head,40);
    display(head);
    deleteAlternate(head);
    display(head);
    return 0;

}
