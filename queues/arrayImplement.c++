#include<bits/stdc++.h>
using namespace std;
class Queue{
    int front ;
     int back;
    vector<int>v;
    public:
   Queue(int n) 
   {
    this->back=-1;
    this->front=-1;
   } // constructor to initialize the queue
   void enqueue(int data)
   {
    v.push_back(data);
    this->back++;

   }
   void dequeue()
   {
    if(this->front==this->back)
    {
    this->front =-1;
    this->back=-1;
    }
    else
    this->front++;
   }
   int getfront()
   {
    if(this->front == -1)
    return -1;
    return this->v[this->front];
   }
   bool isEmpty()
   {
    this->front =-1;
   }
};
int main()
{
    Queue qu(5);
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
        cout<<qu.getfront()<<" ";
        qu.dequeue();
      }
      return 0;
}
