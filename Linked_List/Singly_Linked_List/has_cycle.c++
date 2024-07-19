Program-:to detect presence of cycle in a linked list
#include<bits/stdc++.h>
using namespace std;
bool detectCycle(Node * &head)
{
    if(head==NULL)
    return false;
    Node* slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(fast==slow)
        return true;
        else
        {
            fast=fast- > next -> next;
            slow=slow->next;
        }
    }
    return false;
}
//to remove cycle
void remove_cycle(Node *&head)
{
    Node *slow=head;
    Node *fast=head;
    while(slow!=fast)
    {
      slow=slow->next;
      fast=fast->next->next;
    }
    fast=head;
    while(slow->next !=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
