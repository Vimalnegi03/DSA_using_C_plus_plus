#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=0;j<r;j++)
    {
        if(arr[j]<pivot)
        {
        i++;

        swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return (i+1);
}
int kth_smallest(int arr[],int l, int r, int k)
{
    if(k>=0&&k<=(r-l+1))
    {
        int pos=partition(arr,l,r);
        if(pos-l==k-1)
        return arr[pos];
        else if(pos-l>k-1)
        {
            kth_smallest(arr,0,pos-1,k);
        }
        else
        kth_smallest(arr,pos+1,r,k-(pos-l)+1);
    }
    else
    return -1;

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
    int k;
    cin>>k;
   cout<< kth_smallest(a,0,x-1,k);
  
}
