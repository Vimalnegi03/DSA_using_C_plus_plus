#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    vector<int>v1(m);
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        v1.push_back(y);
    }
    int ans_sum=0;
    set<int>s1;
    for(auto value:v)
    {
        s1.insert(value);
    }
   
    for(auto value:v1)
    { if(s1.find(value)!=s1.end())  //
        ans_sum=ans_sum+value;

    }
    cout<<ans_sum;

}
