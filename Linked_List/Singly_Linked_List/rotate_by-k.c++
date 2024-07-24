#include<bits/stdc++.h>
using namespace std;
Node *rotateByK(Node *&head,int k)
{
 //find length of linked list
 int n=0;
 //find tail
 Node *tail=head;
 while(tail->next)
 {
    n++
    tail=tail->next;
 }
 //as last node is not completely counted
 n++;
 k=k%n;
 if(k==0)
 return head;
 tail->next=head;
 //traverse n-k nodes
 Node * temp=head;
 for(int i=1;i<n-k;i++)
 {
    temp=temp->next;
 }
Node *new_head=temp->next;
temp->next=NULL;
return new_head;
}
