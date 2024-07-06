Problem Statement-:You are given an array consisting of 0 and 1 only you have to sort that array in minimum time complexity
input-:[1,0,0,0,1]
  Ouput-:[0,0,0,1,1]

#include<bits/stdc++.h>
using namespace std;
void sortZeroes(vector<int>&v,int x)
{
    int zero=0;
      for(int i=0;i<x;i++)
    {
    if(v[i]==0)
    
     zero=zero +1;
    
    }
    for(int i=0;i<x;i++)
    {
        if(i<zero)
        v[i]=0;
        else 
        v[i]=1;
    }
}
int main()
{
    int x;
    cin>>x;
    int zero=0;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
    int y;
    cin>>y;
    v.push_back(y);
    }
    sortZeroes(v,x);
  
    for(int i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}
