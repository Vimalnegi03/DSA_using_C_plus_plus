
#include<bits/stdc++.h>
using namespace std;
Node *oddEvenLinkedList(Node *&head)
{
Node *even_head=head->next;
Node *even_ptr=even_head;
Node *odd_ptr=head;
while(even_ptr && even_ptr->next)
{
    odd_ptr->next=odd_ptr->next->next;
    even_ptr->next=even_ptr->next->next;
    odd_ptr=odd_ptr->next;
    even_ptr=even_ptr->next;
}
odd_ptr->head=even_head;
}
