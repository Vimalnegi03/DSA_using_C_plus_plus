#include<bits/stdc++.h>
using namespace std;
void zeroes(int a[],int x)
{
for(int i=0;i<x-1;i++)
{
    for(int j=0;j<x-i-1;j++)
    {
        if( a[j]==0)
        {
            swap(a[j],a[j+1]);
        }
    }
}
    

}
int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

    zeroes(a,x);
      for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
}
