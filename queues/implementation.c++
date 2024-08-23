#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int data)
    {
        this->val=data;
        next = NULL; 
    }


};
class Queue{
Node *head;
Node *tail;
    int size=0;
public:
Queue()
{
    this->head=NULL;
    this->tail=NULL;
}
void enqueue(int data)
{
 Node* newnode = new Node(data);
 if(this->head==NULL)
 {
   this->head=newnode;
  this->tail=newnode;
 }
 else
 {
    this->tail->next=newnode;
    this->tail=newnode;
 }
 size++;
}
void dequeue()
{
    if(this->head==NULL)
    {
        return;
    }
    else{
        Node *oldhead=this->head;
        Node *newhead=this->head->next;
        this->head=newhead;
        if(this->head==NULL)
        this->tail=NULL;
        oldhead->next=NULL;
        delete oldhead;
        this->size--;

    }
}
int getSize()
{
    return this->size;
}
bool isEmpty()
{
    return this->head=NULL;
}
int front()
{
    if(this->head==NULL) return -1;
    return this->head->val;
}
};
int main()
{
 Queue qu;
 qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
   qu.enqueue(40);
    qu.enqueue(50);
    qu.dequeue();
     qu.dequeue();
      qu.dequeue();
      qu.enqueue(70);
      while(!qu.isEmpty())
      {
        cout<<qu.front()<<" ";
        qu.dequeue();
      }
      return 0;
}
