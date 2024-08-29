#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void addEdge(int a,int b,bool bi_dir=true)
{
    graph[a].push_back(b);
    if(bi_dir)
    {
        graph[b].push_back(a);
    }
}
void topoBFS()
{
    //KANNS algorithm
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++)
    {
        for(auto neighbor:graph[i])
        {
            indegree[neighbor]++;
        }
    }
    queue<int>qu;
    unordered_set<int>visited;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        {
            qu.push(i);
            visited.insert(i);
        }
    }
    while(!qu.empty())
    {
        int node=qu.front();
        qu.pop();
        cout<<node<<" ";
        for(auto neighbor:graph[node])
        {
        if(!visited.count(neighbor))
        {
            indegree[neighbor]--;
            if(indegree[neighbor]==0)
            {
                qu.push(neighbor);
            visited.insert(neighbor);
            }
        }
        }
    }
}
int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int>());
    while(e--)
    {
     int x,y;
     cin>>x>>y;
     addEdge(x,y,false);
    }
    topoBFS();
}
