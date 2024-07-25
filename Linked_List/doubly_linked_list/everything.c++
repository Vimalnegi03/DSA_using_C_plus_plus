#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int data)
    {
        val=data;
        next=NULL;
        prev=NULL;
    }

};
class Doubly_LinkedList
{
    public:
    Node *head;
    Node *tail;
    Doubly_LinkedList()
    {
        head=NULL;
        tail=NULL;

    }

void insertAtStart(int data)
{
    Node* newNode = new Node(data);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    newNode->prev=NULL;
    head=newNode;
    return;

}
void insertAtkth(int data,int pos)
{
    Node *newNode=new Node(data);
    Node *temp=head;
   int count=1;
   while(count<(pos-1))
   {
    temp=temp->next;
    count++;
    
   }
   newNode->next=temp->next;
   temp->next=newNode;
   newNode->prev=temp;
   newNode->next->prev=newNode;
}
void insertAtEnd(int data)
{
  Node *newNode=new Node(data);
  if(tail==NULL)
  {
    tail=head=newNode;
    return ;
  }
  tail->next=newNode;
  newNode->prev=tail;
  tail=newNode;
  return;

}
//deletion
void deleteAtStart()
{
    if(head == NULL)
    return;
    Node *temp=head;
    temp=temp->next;
    head=temp;
    return;
}
//delete at end;
void deleteAtEnd()
{
    if(head==NULL)
    return;
    if(head==tail)
    {
    head=NULL;
    tail=NULL;
    return;
    }
    Node *temp=tail;
    temp->prev->next=NULL;
    tail=temp;
    return;

}
//deletion at kth position
void deleteAtposition(int k)
{
    Node *temp=head;
    int count =1;
    while(count<k)
    {
      temp=temp->next;
      count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}

//reverse linked list
void reverse(Node *&head,Node *&tail)
{
 Node *curr_ptr=head; 
 while(curr_ptr)
 {
    Node *next_ptr=curr_ptr->next;
    curr_ptr->next=curr_ptr->prev;
    curr_ptr->prev=next_ptr;
    curr_ptr=next_ptr;
 }
 Node *new_head=tail;
 tail=head;
 head=new_head;
}
//deleting nodes that have same neighbors
void deletesameNeighbor(Node *&head,Node *&tail)
{
Node *curr_ptr=tail->prev;
while(curr_ptr!=head)
{
    Node *prevNode=curr_ptr->prev;
    Node *nextNode=curr_ptr->next;
    if(prevNode->val==nextNode->val)
    {
        prevNode->next=nextNode;
        nextNode->prev=prevNode;
        
    }
    curr_ptr=prevNode;
}
}
//Maxima and Minima
bool isCriticalPoint(Node *&currNode)
{
 if(currNode->prev->val<currNode->val && currNode->next->val<currNode->val)//local maxima
 {
  return true;
 }
 if(currNode->prev->val>currNode->val && currNode->next->val>currNode->val)//local minima
 {
  return true;
 }
 return false;

}
vector<int>distancebwCriticalPoints(Node *head,Node *tail)
{
 vector<int>ans(2,INT_MAX);
 int firstCp=-1;
 int lastCp=-1;
 Node *currNode=tail->prev;
 if(currNode==NULL)
 {
    ans[0]=ans[1]=-1;
    return ans;
 }
 int currPos=0;
 while(currNode->prev!=NULL)
 {
    if(isCriticalPoint(currNode))
    {
      if(firstCp==-1)
      {
       firstCp=lastCp=currPos;

      }
      else{
        ans[0]=min(ans[0],currPos-lastCp);//min distance
        ans[1]=currPos-firstCp;//max_distance
      }
    }
    currPos++;
    currNode=currNode->prev;
 }
 if(ans[0]==INT_MAX)
 ans[0]=ans[1]=-1;
 return ans;
}
void display()
{
 Node *temp=head;
 while(temp!=NULL)
 {
    cout<<temp->val<<"->";
    temp=temp->next;
 }
 cout<<"NULL"<<endl;
}
};
int main()
{
    // Node * new_node=new Node(1);
    Doubly_LinkedList dll;
    // dll.head=new_node;
    // dll.tail=new_node;

    dll.insertAtStart(3);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
     dll.insertAtStart(1);
    dll.display();
     dll.insertAtEnd(4);
    dll.display();
    dll.insertAtkth(5,2);
    // dll.display();
    // dll.deleteAtStart();
    // dll.display();
    //  dll.deleteAtStart();
    // dll.display();
    // dll.deleteAtEnd();
    // dll.display();
    dll.reverse(dll.head,dll.tail);
    dll.display();



}
