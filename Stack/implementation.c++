#include<bits/stdc++.h>
using namespace std;
class Stack
{

int capacity;
int *arr;
int top;
public:
Stack(int c)
{
   this-> capacity=c;
    arr=new int[c];
    this->top=-1;
}
void push(int data)
{
    if(this->top==this->capacity-1)
    {
        cout<<"overflow"<<endl;
     return;
    }
    this->top=top+1;
   this-> arr[this->top]=data;
   cout<<"element inserted successfully";
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
       return ;
    }
    int y=arr[top];
    this->top--;
    cout<<y<<" is popped from the stack."<<endl;
}
bool isEmpty()
{
    if(this->top==-1)
    return true;
    else
    false;
}
int size()
{
    return top+1;
}
bool isFull()
{
    if(this->top==this->capacity-1)
    return true;
    else
    false;
}
int top_most()
{
 return arr[top];
}

};
int main()
{
    Stack st(5);
    st.push(10);
    cout<<st.top_most()<<endl;
    st.push(30);
     st.push(40);
    st.push(50);
    st.pop();
    st.pop();
   cout<< st.isEmpty()<<endl;
   cout<< st.isFull();


}
