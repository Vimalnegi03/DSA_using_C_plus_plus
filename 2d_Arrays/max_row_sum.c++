Progam to print row no. that have maximum  sum

#include<bits/stdc++.h>
using namespace std;
int prefix_sum(vector<vector<int>>v)
{
    int max=0;int index=1;
    for(int i=0;i<v.size();i++)
    {     int sum=0;
        for(int j=0;j<v[0].size();j++)
        {
          sum=sum+v[i][j];
        }
        if(sum>max)
        {
         max=sum;
         index=i+1;
        }

    }
    return index;
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
  int index=  prefix_sum(v);
    cout<<"max valued indedx is"<<index <<endl;

}
