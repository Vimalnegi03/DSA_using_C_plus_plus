Program to find intersection in linked list
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
int getLength(Node*head)
{
    int n=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        n=n+1;
        temp=temp->next;
    }
    return n;
}
Node * moveHeadbyk(Node *&head,int k)
{
Node *ptr=head;
while(k--)
{
    ptr=ptr->next;
}
return ptr;
}
Node *intersection(Node *&a,Node *&b)
{
    Node *temp=a;
    Node *temp1=b;
    //calculate length of both linked list
     int length_a=getLength(a); 
     int length_b=getLength(b); 
     //find diffrence k and move longer linked list ptr distance k
      Node *ptr1;
       Node *ptr2;
     if(a>b)// a is longer
     {
       int k=a-b;
      ptr1= moveHeadbyk(a,k);
      ptr2= b;
     }
     else{//l2 is longer
         int k=b-a;
         ptr1=a;
         ptr2=moveHeadbyk(b,k);

     }
     //step 3 compare pointer one and pointer two nodes
     while(ptr1)
     {
        if(ptr1==ptr2)
        {
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
     }
     return NULL;
}

int main()
{
    // Node *n=new Node(1);
    // cout<<n->val<<" "<<n->next;
    Node *head=NULL;
    Node *b=NULL;
    insertAtHead(b,1);
     insertAtend(b,2);
      insertAtend(b,3);
      insertAtend(b,4);
      insertAtend(b,5);
      display(b);
      Node *a=NULL;
      insertAtHead(a,6);
      insertAtend(a,7);
      a->next->next=b->next->next->next;
    //    insertAtend(a,4);
    //   display(a);
       insertAtend(a,5);
      display(a);
    //   sort(head);
    //   display(head);
 Node *ans=   intersection(a,b);
 cout<<ans->val;

}
