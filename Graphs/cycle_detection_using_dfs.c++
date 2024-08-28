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
bool dfs(int src,int parent,unordered_set<int>&vis)
{
 vis.insert(src);
 for(auto neighbor:graph[src])
 {
    if(vis.count(neighbor)&&neighbor!=parent)//cycle detected
    {
      return true;
    }
    if(!vis.count(neighbor))
    {
   bool res= dfs(neighbor,src,vis);
   if(res==true)
return true;    
    }

 }
 return false;//no cycle detected
}
bool hasCyce()
{
unordered_set<int>visited;
bool result=false;
for(int i=0;i<v;i++)
{
if(!visited.count(i))
{
 result=dfs(i,-1,visited);//-1 as parent as from here dfs starts
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
