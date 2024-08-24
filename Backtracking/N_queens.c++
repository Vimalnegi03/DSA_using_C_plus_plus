#include<bits/stdc++.h>
using namespace std;
bool canPlaceQueen(int row,int col,vector<vector<char>>&grid)
{
//attacking from vertical
for(int i=row-1;i>=0;i--)
{
 if(grid[i][col]=='Q')
 return false;

}
for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
{
 if(grid[i][j]=='Q')
 return false;
}
for(int i=row-1,j=col+1;i>=0&&j<=grid.size();i--,j++)
{
     if(grid[i][j]=='Q')
 return false;
}
return true;
}
void nQueen(int currRow,int n,vector<vector<char>>&grid)
{
    if(currRow==n)
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
   
    for(int col=0;col<n;col++)
    {
        //we will go to all cols
        //lets check if the queen can be placed at curr row and curr col
        if(canPlaceQueen(currRow,col,grid))
        {
           grid[currRow][col]='Q';
           nQueen(currRow+1,n,grid);
           grid[currRow][col]='.';
        }
    }

}
int main()
{
int n=4;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
nQueen(0,n,grid);
}
