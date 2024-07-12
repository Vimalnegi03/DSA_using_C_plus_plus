Program-find row with maximum no of ones
#include<bits/stdc++.h>
using namespace std;
int max1(vector<vector<int>>&v)
{
    int max=INT16_MIN;
    int maxOnesRow=-1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
    if(v[i][j]==1)
    {
        // to count no of ones
        int count =v[i].size()-j;
        if(count>max)
        {
            max=count;
            maxOnesRow=i;
        }
        break;
    }
        }
    }
    return maxOnesRow;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int res=max1(v);
    cout<<res;
}
