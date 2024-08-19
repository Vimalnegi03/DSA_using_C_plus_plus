#include<bits/stdc++.h>
using namespace std;
int N=1e3;
void heapify(int arr[],int n,int curr)
{
 while(2*curr<=n)
 {
    int leftChild=2*curr;
    int rightChild=2*curr+1;
    int maxChild=leftChild;
    if(rightChild<=n&&arr[rightChild]>arr[leftChild])
    {
        maxChild=rightChild;
    }
    if(arr[curr]<arr[maxChild])
    {
        swap(arr[curr],arr[maxChild]);
        curr=maxChild;
    }
    else
    {
        break;
    }
 }
}

void remove(int arr[],int &size)
{
    swap(arr[1],arr[size]);
    size--;
    heapify(arr,size,1);
}
void heapSort(int arr[],int n)
{
    //1. heapify all parets  nodes into max heap
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    //2.Keep deleting elemnts from heap until it becomes zero
    while(n>0)
    {
        remove(arr,n);
    }
}
int main() {
    int n=7;
int arr[N]={-1,60,10,80,50,5,20,70};
heapSort(arr,n);
for(int i=0;i<7;i++)
{
    cout<<arr[i]<<" ";
}
}
