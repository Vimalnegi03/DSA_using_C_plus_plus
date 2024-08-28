#include<bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>>graph;
#define ll long long int
void add_edge(int u,int v,bool bi_dir=true,int wt)
{
 graph[u].push_back({v,wt});
 if(bi_dir)
 graph[v].push_back({u,wt});
}
unordered_map<int,int> dijsktra(int src,int n)
{
priority_queue<pair<int,int>,pair<int,int>,greater<pair<int,int>>>pq;//{wt,node}
unordered_set<int>vis;
vector<int>via(n+1);


unordered_map<int,int>mp;
for(int i=0;i<n;i++)
{
    mp[i]=INT_MAX;
}
pq.push((0,src));
mp[src]=-1;

while(!pq.empty())
{
 pair<int,int>curr=pq.top();
 if(vis.count(curr.second))
 {
    pq.pop();
    continue;
 }
 vis.insert(curr.second);

 
 pq.pop();
 for(auto neighbor:graph[curr.second])
 {
    if(!vis.count(neighbor.first)&& mp[neighbor.first]>mp[neighbor.second]+neighbor.second)
    {
    pq.push((mp[neighbor.second]+neighbor.second,neighbor.first));
    via[neighbor.first]=curr.second;
    mp[neighbor.first]=mp[neighbor.second]+neighbor.second;
    }
 }
}
 return mp;


}
int main()
{
    int n,e;
    cin>>n>>e;
    graph.resize(n,list<pair<int,int>>());
    while(e--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int>sp=dijsktra(src,n);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<" ";
  

}
