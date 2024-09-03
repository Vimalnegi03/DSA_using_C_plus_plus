#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
      b[j]=*(a+i);
      j++;
    }
     for(int i=0;i<n;i++)
    {
        cout<<b[i];
    }

}
