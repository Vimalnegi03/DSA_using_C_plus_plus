#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int x)
{
 for(int i=1;i<x;i++)//loop starting from one as we consider the first element is sorted 
 {
    int curr=a[i];
    int prev=i-1;
    while(prev>=0 && a[prev]>curr)//to find the place where to insert the element
    {
        a[prev+1]=a[prev];
        prev--;
    }
    a[prev+1]=curr;//since in case where all the elements will be greater than the current one j will point to -1 so to keep the range within array bounds 
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
    insertion_sort(a,x);
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }

}
