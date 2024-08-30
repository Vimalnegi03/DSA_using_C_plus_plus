#include<bits/stdc++.h>
using namespace std;
void checkLargest(  priority_queue<int,vector<int>,greater<int>>&pq,int k)
{
while(k--)
{
    int y=pq.top();
    pq.pop();
    int z=pq.top();
    pq.pop();
    int ans=y*z;
    pq.push(ans);
}
}
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>v;
    int n;
    cin>>n;
    int k;
    cout<<"No oof times"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
      int y;
      cin>>y;
      v.push_back(y);
      pq.push(y);
    }
   checkLargest(pq,k);
   priority_queue<int>pq1;
   while(!pq.empty())
   {
    pq1.push(pq.top());
    pq.pop();
   }
   cout<<endl;
   cout<<pq1.top();
   map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
}
