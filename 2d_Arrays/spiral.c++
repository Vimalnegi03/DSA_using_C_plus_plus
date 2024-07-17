PROGRAM-write a program to print spiral matrix
#include<bits/stdc++.h>
using namespace std;
void spiralMatrix(vector<vector<int>>&v)
{
    // to trace matrix
    int left=0;
    int right=v[0].size()-1;
    int top=0;
    int bottom=v.size()-1;


    int direction=0;
    while(left<=right &&  top <=bottom )
    {
        // left to right
        if(direction==0)
        {
        for(int col=left;col<=right;col++)
        {
            cout<<v[top][col]<<" ";
        }
        // direction++;
        top++;
        }
        // top to bottom
       else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
            cout<<v[row][right]<<" ";
            // direction++;
            }
            right--;
        }
        // right to left
       else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                cout<<v[bottom][col]<<" ";
            }
            // direction ++;
            bottom--;
        }
        else
        {
            for(int row=bottom;row>=top;row--)
            {
             cout<<v[row][left]<<" ";
            }
             left++ ;
        }
        direction=(direction +1)%4;

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
    spiralMatrix(v);
}
