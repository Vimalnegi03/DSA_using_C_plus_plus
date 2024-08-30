// heap implementation in c++ is done using this
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;//to create max heap
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq.push(1);
     pq.push(4);
      pq.push(10);
       pq.push(5);
        pq.push(6);
        pq1.push(1);
     pq1.push(4);
      pq1.push(10);
       pq1.push(5);
        pq1.push(6);
        cout<<pq.top()<<endl;
        cout<<pq1.top()<<endl;
        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
        while(!pq1.empty())
        {
            cout<<pq1.top()<<" ";
            pq1.pop();
        }
}
