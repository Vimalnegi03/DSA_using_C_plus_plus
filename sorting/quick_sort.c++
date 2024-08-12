#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
    int i=l-1;
    int pivot=a[h];
    for(int j=0;j<h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quick_sort(int a[],int l,int h)
{
    if(l>=h)
    return ;
    int parti=partition(a,l,h);
    quick_sort(a,l,parti-1);
    quick_sort(a,parti+1,h);
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
        quick_sort(a,0,x-1);
      for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }

}
