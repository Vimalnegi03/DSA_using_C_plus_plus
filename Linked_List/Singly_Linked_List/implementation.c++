Program to implement linked list using c++
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
//insertion at head
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

//delete at start
void  deleteAtStart(Node* &head)
{
   Node*temp=head;
   head=head->next;
   free(temp);

}

//deletion at end
void deleteAtEnd(Node* &head)
{
    Node*temp=head;
    Node*temp1=head->next;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        temp=temp->next;
    }
    temp->next=NULL;
    free(temp1);
    
}
//deletion at specific position
void  deleteAtIndex(Node*& head , int index)
{
    Node*p=head;
    Node*q=head->next;
    for(int i=1;i<index;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    free(p);
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
int main()
{
    // Node *n=new Node(1);
    // cout<<n->val<<" "<<n->next;
    Node *head=NULL;
    insertAtHead(head,7);
    display(head);
    insertAtHead(head,3);
    display(head);
    insertAtend(head,9);
    display(head);
     insertAtHead(head,8);
    display(head);
    insertAtHead(head,15);
    display(head);
    insertAtend(head,19);
    display(head);
    insertAtpos(head,11,3);
    display(head);
    updateKth(head,5,2);
    display(head);
    deleteAtStart(head);
    display(head);
    deleteAtEnd(head);
    display(head);
    deleteAtIndex(head,2);
    display(head);
    return 0;

}
