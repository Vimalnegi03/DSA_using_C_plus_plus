#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    int bottom=v.size()-1;
    int top=0;
    int left=0;
    int right=v[0].size()-1;
    int direction=0;
    int value=1;
    while(top<=bottom && left<=right)
    {
        if(direction==0)
        {
            for(int col=left;col<=right;col++)
            {
                v[top][col]=value++;
            }
            top++;
        }
        else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
                v[row][right] = value++; 
            }
            right--;
        }
        else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                v[bottom][col]=value++;
            }
            bottom--;
        }
        else{
        for(int row=bottom;row>=top;row--)
        {
            v[row][left] = value++; 
        }
        left++;
        }
        direction=(direction+1)%4;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
