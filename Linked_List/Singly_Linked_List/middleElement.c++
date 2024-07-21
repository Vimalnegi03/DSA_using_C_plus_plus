
#include<bits/stdc++.h>
using namespace std;
Node *findMiddleElement(Node* &head)
{
    Node *slow_ptr = head;
    Node *fast_ptr=head;
    while(fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
} 
