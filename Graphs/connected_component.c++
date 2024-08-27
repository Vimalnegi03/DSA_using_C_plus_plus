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
void dfs(int node,unordered_set<int>&visited)
{
    visited.insert(node);
    for(auto neighbor:graph[node])
    {
        if(!visited.count(neighbor))
        {
            dfs(neighbor,visited);
        }
    }
}
int connected_components()
{
    unordered_set<int>visited;
    int result=0;
    for(int i=0;i<v;i++)
    {
        //go to every vertex 
        //if from a vertex we can initialise a dfs that means we have found one more component
        if(visited.count(i)==0)
        {
        result++;
        dfs(i,visited);
        }


    }
    return result;
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
    cout<<connected_components();
    
}
