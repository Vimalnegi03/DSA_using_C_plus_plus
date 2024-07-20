Program -:to merge two sorted list
#include<bits/stdc++.h>
using namespace std;
Node *mergeLinkedList(Node * &head1,Node * &head2)
{
    Node *dummyHeadNode=new Node(-1);
    Node *ptr1=head1;
    Node *ptr2=head2;
    Node *ptr3=dummyHeadNode
    while(ptr1 && ptr2){
        if(ptr1->val<ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;

        }
        ptr3=ptr3->next;
    }
    if(ptr1)
    {
    ptr3->next=ptr1;
    }
    else
    {
        ptr3->next=ptr2;
    }
    return dummyHeadNode->next;
}
