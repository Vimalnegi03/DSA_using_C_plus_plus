Program-write a c++ program to print the  rectangular sum in a matrix
#include <bits/stdc++.h>
using namespace std;
int prefix_sum(vector<vector<int>>&v, int l1,int r1,int l2,int r2) 
{
    // prefix sum row wise
    cout<<" Row matrix is"<<endl;
  for(int i=0;i<v.size();i++)
  {
   int sum=v[i][0];
    for(int j=1;j<v[0].size();j++)
    {
        v[i][j]=v[i][j]+sum;
        sum=v[i][j];
        cout<<v[i][j]<<" ";
    }
    cout<<endl;

  }
//   prefix sum column wise
cout<<"column wise sum is"<<endl;
for(int i=1;i<v.size();i++)
{
    for(int j=0;j<v[0].size();j++)
    {
        v[i][j]+=v[i-1][j];
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
int top_sum,left_sum,top_left_sum;
top_sum=v[l1-1][r2];
left_sum=v[l2][r1-1];
top_left_sum=v[l1-1][r1-1];
int ans=v[l2][r2]-top_sum-left_sum+top_left_sum;
return ans;
// for row sum
//   int ans=0;
//   if(r1!=0)
//   ans=(v[l1][r2]-v[l1][r1-1] ) + (v[l2][r2]-v[l2][r1-1]); 
//   else
//   ans=(v[l1][r2]-v[l1][r1] ) + (v[l2][r2]-v[l2][r1]);
//   return ans ;
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
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
   int sum= prefix_sum(v,l1,r1,l2,r2);
   cout<<sum;
   return 0;
}
