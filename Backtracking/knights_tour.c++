#include<bits/stdc++.h>
using namespace std;
bool tour(vector<vector<int>>&grid,int i,int j,int n,int cnt)//count steps for 4*4 its 16
{
if(i<0||j<0||i>=n||j>=n||grid[i][j]>=0)return false;
if(cnt==n*n-1)
{
    grid[i][j]=cnt;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
return true;
}
grid[i][j]=cnt;
if(tour(grid,i-1,j-2,n,cnt+1)) return true;
if(tour(grid,i-2,j-1,n,cnt+1)) return true;
if(tour(grid,i+1,j-2,n,cnt+1)) return true;
if(tour(grid,i+2,j-1,n,cnt+1)) return true;
if(tour(grid,i+1,j+2,n,cnt+1)) return true;
if(tour(grid,i+2,j-1,n,cnt+1)) return true;
if(tour(grid,i-1,j+2,n,cnt+1)) return true;
if(tour(grid,i-2,j+1,n,cnt+1)) return true;
grid[i][j]=-1;
return false;
}
int main() {
int n=6;
vector<vector<int>>grid(n,vector<int>(n,-1));
tour(grid,0,0,n,0);
}

