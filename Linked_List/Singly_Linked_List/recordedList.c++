#include<bits/stdc++.h>
using namespace std;
Node *reorderLinkedList(Node * &head)
{
    //can check if their are less than three nodes than no change
    
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is pointing to the middle element
    //separate list and reverse the half
    Node *curr=slow->next;
    slow->next=NULL;
    Node *prev=slow;
    while(curr)
    {
        Node *nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
    }
    //merging two half of the linked list
    Node *ptr1=head;//linked list 1
    Node *ptr2=prev;//linked list 2
    while(ptr1!=ptr2)
    {
        Node *temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;

    }
return head;
}
