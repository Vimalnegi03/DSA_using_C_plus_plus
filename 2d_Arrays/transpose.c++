Porgram to print transpose of a matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    // displaying transpose of a matrix
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
}
}
