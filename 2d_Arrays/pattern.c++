Program-:to print pattern 
input -:5
  output-:1
          2 3
          4 5 6
          7 8 9 10
          11 12 13 14 15
#include<bits/stdc++.h>
using namespace std;
void upper(vector<vector<int>>v)
{
int inc=0;
for(int i=0;i<v.size();i++)
{
    for(int j=0;j<=i;j++)
    {
     cout<<" "; 
    }
    for(int j=inc+0;j<v[0].size();j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    inc++;
}
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    upper(v);
    
}
