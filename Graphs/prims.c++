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
ll prims(int src,int n)
{
priority_queue<pair<int,int>,pair<int,int>,greater<pair<int,int>>>pq;//{wt,node}
unordered_set<int>vis;
vector<int>par(n+1);
unordered_map<int,int>mp;
for(int i=1;i<=n;i++)
{
    mp[i]=INT_MAX;
}
pq.push((0,src));
mp[src]=-1;
int total_Count=0;//0 to n-1 edges;
int result=0;
while(total_Count<n&&!pq.empty())
{
 pair<int,int>curr=pq.top();
 if(vis.count(curr.second))
 {
    pq.pop();
    continue;
 }
 vis.insert(curr.second);
 total_Count++;
 result=result+curr.first;
 pq.pop();
 for(auto neighbor:graph[curr.second])
 {
    if(!vis.count(neighbor.first)&& mp[neighbor.first]>neighbor.second)
    {
    pq.push((neighbor.second,neighbor.first));
    par[neighbor.first]=curr.second;
    mp[neighbor.first]=neighbor.second;
    }
 }
}


}
int main()
{
    int n,e;
    cin>>n>>e;
    graph.resize(n+1,list<pair<int,int>>());
    while(e--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    cout<<prims(src,n)<<" ";

}
