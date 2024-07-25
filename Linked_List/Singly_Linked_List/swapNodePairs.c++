#include<bits/stdc++.h>
using namespace std;
Node *swapAdjacent(Node * &head)
{
    if(head==NULL ||head->next==NULL)
    return head;
    //recursive case
    Node *secondNode=head->next;
    head->next=swapAdjacent(secondNode->next);
    secondNode->next=head;
    return secondNode;

}
