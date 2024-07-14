Program-:to check whether matrix is perfect matrix or not (a perfect matrix is a matrix in which 
every non diagonal element is zero and every diagonal element is not zero)
#include<bits/stdc++.h>
using namespace std;
bool perfectMatrix(vector<vector<int>>v)
{
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            if(i==j||i+j==v.size()-1)
            {
                if(v[i][j]==0)
                flag=flag+1;
            }
            else
            {
                if(v[i][j]>0||v[i][j]<0)
                {
                    flag=flag+1;
                }
            }
        }
    }
    if(flag==0)
    return true;
    return false;
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
   bool b= perfectMatrix(v);
   cout<<b;
}
