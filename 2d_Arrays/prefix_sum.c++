Program-:write a program to calculate prefix sum in c++
  #include<bits/stdc++.h>
using namespace std;
void prefix_sum(vector<vector<int>>&v)
{
    // row sum
    for(int i=0;i<v.size();i++)
    {
        for(int j=1;j<v[0].size();j++)
        {
            v[i][j] += v[i][j-1];

        }
    }
    // col sum
    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            v[i][j] += v[i-1][j];

        }
    }
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
    prefix_sum(v);
     for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}
