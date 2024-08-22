#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val)
    {
     this->data=val;
    this-> next=NULL;
    }
  
};
class Stack{
Node *head;
int capacity;
int currSize;
public:
Stack(int c)
{
    this->capacity=c;
    this->currSize=0;
    head=NULL;
}
bool isEmpty()
{
    return this->head==NULL;
}
bool isFull()
{
    return this->currSize == this->capacity;
}
void push(int data)
{
    Node *newNode=new Node(data);
    if(currSize==capacity)
    {
    cout<<"overflow"<<endl;
    return ;
    }
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
    currSize++;
    


}
int pop()
{
    if(head==NULL)
    {
    cout<<"undeerflow"<<endl;
    return 9999999;
    }
    Node *temp=head;
    head=head->next;
    return temp->data;
}
};
int main()
{
    Stack st(5);
    st.push(6);
    st.push(7);
    st.push(4);
   cout<< st.pop()<<endl;
    cout<<st.pop()<<endl;
}
