#include<bits/stdc++.h>
using namespace std;
void selection(string a[],int x)
{
    for(int i=0;i<x-1;i++)
    {
        int min =i;
        for(int j=i+1;j<x;j++)
        {
            if(a[j].compare(a[min])<0)
            {
            min=j;
            }
        }
        swap(a[i],a[min]);
    }
}
int main()
{
    int x;
    cin>>x;
    string a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

    selection(a,x);
      for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
}
