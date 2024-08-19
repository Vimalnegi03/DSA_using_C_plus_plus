#include<bits/stdc++.h>
using namespace std;
int N=1e3;
void insertMinHeap(int minHeap[],int &size,int value)
{
    size++;//so that new element can be inserted
    minHeap[size]=value;
    int currPos=size;//to track curr pos;
    while(currPos/2>0 && minHeap[currPos/2]>minHeap[currPos])//curr/2>0 means still we havent reached to root node to check value of root node is smaller than child node
    {
       swap(minHeap[currPos/2],minHeap[currPos]);
       currPos=currPos/2;
    }
}
void insertMaxHeap(int heap[],int valu,int siz)
{
    siz++;
    heap[siz]=valu;
    int curr=siz;
    while(curr/2>0 && heap[curr/2]<heap[curr])
    {
        swap(heap[curr],heap[curr/2]);
        curr=curr/2;
    }

}
void deleteinMin(int heap[],int &size)
{
 swap(heap[1],heap[size]);
 size--;
 int currPos=1;
 while(currPos*2<=size )
 {
   int leftChild=2*currPos;//indicate leftchild
   int rightChild=2*currPos+1;//indicate right child
   int minChild=leftChild;//considering left child as smallest child
   if(rightChild<=size&&heap[rightChild]<heap[leftChild])//checking if right child exist that if its minimum one or not
   {
 minChild=rightChild;
   }
   if(heap[currPos]>heap[minChild])//swapping
   {
    swap(heap[currPos],heap[minChild]);
    currPos=minChild;
   }
   else
   break;
 }
}
void deletionInmax(int heap[],int &siz)
{
 swap(heap[1],heap[siz]);
 siz--;
 int currPos=1;
 while(currPos*2<=siz)
 {
    int leftChild=2*currPos;
    int rightChild=2*currPos+1;
    int maxChild=leftChild;
    if(rightChild<=siz&&heap[rightChild]>heap[leftChild])
    {
        maxChild=rightChild;
    }
    if(heap[currPos]<heap[maxChild])
    {
        swap(heap[currPos],heap[maxChild]);
        currPos=maxChild;
    }
    else{
        break;
    }
 }
}
void heapify(int arr[],int &size,int i)
{
while(2*i<=size)
{
    int leftChild=2*i;
    int rightChild=2*i+1;
    int minChild=leftChild;
    if(rightChild<=size&&arr[rightChild]<arr[leftChild])
    {
        minChild=rightChild;
    }
    if(arr[minChild]<arr[i])
    {
        swap(arr[minChild],arr[i]);
        i=minChild;
    }
}
}
void maxheapify(int arr[],int &size,int i)
{
while(2*i<=size)
{
    int leftChild=2*i;
    int rightChild=2*i+1;
    int maxChild=leftChild;
    if(rightChild<=size&&arr[rightChild]>arr[leftChild])
    {
        maxChild=rightChild;
    }
    if(arr[maxChild]>arr[i])
    {
        swap(arr[maxChild],arr[i]);
        i=maxChild;
    }
    else
    {
        break;
    }
}
}
int main()
{
    int minHeap[N]={-1,10,20,30,40,50};
    int size=5;
    int value=5;
    insertMinHeap(minHeap,size,value);
    for(int i=0;i<=5;i++)
    {
        cout<<minHeap[i]<<" ";
    }
    cout<<endl;
    int maxHeap[N]={999,60,50,40,30,20,30,10};
    int siz=7;
    int valu=70;
    insertMaxHeap(maxHeap,siz,valu);
     for(int i=0;i<=5;i++)
    {
        cout<<maxHeap[i]<<" ";
    }
    //deletion in min heap
    cout<<endl;
    deleteinMin(minHeap,size);
    for(int i=0;i<=5;i++)
    {
        cout<<minHeap[i]<<" ";
    }
    cout<<endl;
    deletionInmax(maxHeap,siz);
       for(int i=0;i<=5;i++)
    {
        cout<<maxHeap[i]<<" ";
    }
    cout<<endl;
    //heapify for min heap
    int arr[N]={-1,60,10,80,50,5,20,70};
    int si=7;
    for(int i=si/2;i>0;i--)
    {
        heapify(arr,si,i);
    }
   for(int i=0;i<=si;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    cout<<endl;
    //heapify for max heap
    int ar[N]={99,60,10,80,50,5,20,70};
    int sie=7;
    for(int i=sie/2;i>0;i--)
    {
        maxheapify(ar,sie,i);
    }
   for(int i=0;i<=sie;i++)
   {
    cout<<ar[i]<<" ";
   }
   cout<<endl;

}
