#include<bits/stdc++.h>
using namespace std;
bool pathExist(int a,int b,vector<vector<int>>&grid)
{
if( (a < grid.size() && b < grid.size() && a >=0 && b>=0) && grid[a][b]==1)
return 1;
else return 0;
    
}
int ways(int i,int j,vector<vector<int>>&grid)
{
    int n=grid.size();
    if(i==n-1&&j==n-1)
    {
        return  1;
    }
   int sum=0;
    grid[i][j]=2;
    if(pathExist(i,j+1,grid))
  sum+=  ways(i,j+1,grid);//right
    if(pathExist(i+1,j,grid))
   sum+= ways(i+1,j,grid);//down
    if(pathExist(i-1,j,grid))
  sum+=  ways(i-1,j,grid);//up
    if(pathExist(i,j-1,grid))
   sum+= ways(i,j-1,grid);//left
    grid[i][j]=1;
    return sum;
}
int main()
{
 vector<vector<int>>grid={
    {1,1,1,1},
    {0,1,0,1},
    {0,1,1,1},
    {0,1,1,1}
 };
 cout<<ways(0,0,grid);
}
