#include<bits/stdc++.h>
using namespace std;
//graphs implementation
vector<list<int>>graph;
int v;
unordered_set<int>visited;
void add_edge(int src,int dest)
{
graph[src].push_back(dest);


    graph[dest].push_back(src);

}
bool bfs(int src)
{
 unordered_set<int>vis;
 queue<int>qu;
 vector<int>par(v,-1);
 qu.push(src);
 vis.insert(src);
 par[src]=-1;
 while(!qu.empty())
 {
    int curr=qu.front();
    qu.pop();
    for(auto neighbor:graph[curr])
    {
        if(vis.count(neighbor)&&par[curr]!=neighbor)
        return true;
        if(!vis.count(neighbor))
        {
            vis.insert(neighbor);
            par[neighbor]=curr;
            qu.push(neighbor);
        }
    }
 }



}
bool hasCyce()
{
unordered_set<int>visited;
bool result=false;
for(int i=0;i<v;i++)
{
if(!visited.count(i))
{
 result=bfs(i);//-1 as parent as from here dfs starts
 if(result==true)
 return true;
}

}
return false;

}

int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--)
    {
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
  bool b=hasCyce();
  cout<<b;
    
}
