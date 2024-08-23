#include<bits/stdc++.h>
using namespace std;
void max_window(vector<int>&arr,int k)
{
 deque<int>d;
 for(int i=0;i<k;i++)
 {
    while(!d.empty() && arr[d.back()]<arr[i])
    {
     d.pop_back();
    }
    d.push_back(i);
 }
 for(int i=k;i<arr.size();i++)
 {
   int curr=arr[i];
   if(d.front() ==i-k)
   d.pop_front();
    while(!d.empty() && arr[d.back()]<arr[i])
    {
     d.pop_back();
    }
    d.push_back(i);
 }
}
int main()
{

}
