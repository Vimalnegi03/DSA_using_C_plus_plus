#include<bits/stdc++.h>
using namespace std;
int summ(vector<vector<int>>&v)
{
 int sum=0;int temp=0;
 int n=ceil(v.size()/2);
 cout<<n<<endl;
 for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++)
    {
        if(i==0||i==v.size()-1)
        sum=sum+v[i][j];
        else
        continue;

    }
 }
        cout<<sum;
 for(int i=1;i<v.size()-1;i++)
 {
   sum=sum+v[i][n];
 }
 return sum;

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
    int sum=summ(v);
     cout<<sum;
}
