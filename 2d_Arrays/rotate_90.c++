// Program-:program to rotate a matrix by 90 
// 1 2 3      7 4 1
// 4 5 6  =>  8 5 2
// 7 8 9      9 6 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         cin>>a[i][j];
        }
    }
    int b[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         if(i==0)
         {
            b[j][c-1]=a[i][j];
         }
         else if(i==r-1)
         {
            b[j][0]=a[i][j];
         }
         else
         b[j][i]=a[i][j];
        }
    }
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}
