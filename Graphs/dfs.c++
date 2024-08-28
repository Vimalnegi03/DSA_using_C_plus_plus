#include<bits/stdc++.h>
using namespace std;
//graphs implementation
vector<list<int>>graph;
int v;
unordered_set<int>visited;
void add_edge(int src,int dest,bool bi_dir)
{
graph[src].push_back(dest);
if(bi_dir)
{
    graph[dest].push_back(src);
}
}
bool dfs(int curr,int end)
{
    if(curr==end)return true;
     visited.insert(curr);//mark visited
     for(auto neighbor:graph[curr])
     {
        if(!visited.count(neighbor))
        {
            bool res=dfs(neighbor,end);
        if(res)
        return true;
        }
     }
     return false;
}
bool any_path(int src,int dest)
{
return dfs(src,dest);
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
        add_edge(s,d,false);
    }
    int x,y;
    cin>>x>>y;
    cout<<any_path(x,y)<<" \n";
}
