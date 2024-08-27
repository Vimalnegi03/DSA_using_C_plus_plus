#include<bits/stdc++.h>
using namespace std;
//graphs implementation
vector<list<int>>graph;
int v;
unordered_set<int>visited;
vector<vector<int>>result;
void add_edge(int src,int dest,bool bi_dir)
{
graph[src].push_back(dest);
if(bi_dir)
{
    graph[dest].push_back(src);
}
}
void dfs(int curr,int end,vector<int>&path)
{
    if(curr==end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
     visited.insert(curr);//mark visited
     path.push_back(curr);
     for(auto neighbor:graph[curr])
     {
        if(!visited.count(neighbor))
        {
           dfs(neighbor,end,path);
       
        }
     }
     path.pop_back();
     visited.erase(curr);
     return;
}
bool all_path(int src,int dest)
{
    vector<int>v;
 dfs(src,dest,v);
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--)
    {
        int s,d,wt;
        cin>>s>>d;
        add_edge(s,d,true);
    }
    int x,y;
    cin>>x>>y;
    all_path(x,y);
    for(auto path:result)
    {
        for(auto el:path)
        cout<<el<<" ";
    }
    cout<<"\n";
}
