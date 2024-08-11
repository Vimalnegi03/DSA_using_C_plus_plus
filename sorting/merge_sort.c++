#include<bits/stdc++.h>
using namespace std;
void merge(int v[],int l,int m,int h)
{
    int l1=m-l+1;
    int l2=h-m;
    int a[l1];
    int b[l2];
    for(int i=0;i<l1;i++)
    {
        a[i]=v[l+i];
    }
     for(int i=0;i<l2;i++)
    {
        b[i]=v[m+1+i];
    }
    int i=0;int j=0;int k=l;
    while(i<l1&&j<l2)
    {
        if(a[i]<b[j])
        {
            v[k++]=a[i++];
        }
        else
        v[k++]=b[j++];
    }
    if(i<l1)
    {
        while(i<l1)
        {
            v[k++]=a[i++];
        }
    }
    if(j<l2)
    {
        while(j<l2)
        {
            v[k++]=b[j++];
        }
    }

}
void mergeSort(int v[],int l,int r)
{
    if(l>=r)
    {
    return;
    }
    int m=(l+r)/2;
    mergeSort(v,l,m);
    mergeSort(v,m+1,r);
    merge(v,l,m,r);
}
int main()
{
    int x;
    cin>>x;
    int v[x];
    for(int i=0;i<x;i++)
{
    cin>>v[i];
}
mergeSort(v,0,x-1);
for(int i=0;i<x;i++)
{
    cout<<v[i]<<" ";
}
}
