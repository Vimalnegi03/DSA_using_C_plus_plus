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

void bfs(int src,vector<int>&dist)
{
    queue<int>qu;
    visited.clear();
    dist.resize(INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(!qu.empty())
    {
        int curr=qu.front();
        qu.pop();
        for(auto neighbor:graph[curr])
        {
            if(!visited.count(neighbor))
            {
                qu.push(neighbor);
                visited.insert(neighbor);
                dist[neighbor]=dist[curr]+1;
            }
        }

    }
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
    cin>>x;
    vector<int>dist;
    bfs(x,dist);
     for(int i=0;i<dist.size();i++)
     {
        cout<<dist[i]<<" ";
     }    
    cout<<"\n";
}
