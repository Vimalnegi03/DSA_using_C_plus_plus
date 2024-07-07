Program-:arrange the elements given in an array in an order such that all the odd number apperars before the even no. in an array
  
#include<bits/stdc++.h>
using namespace std;
void oddEven(vector<int>&v,int x)
{
    int low=0;int p=0;int high=x-1;
    while(low<high)
    {
        if(v[high]%2==0 && v[low]%2==1)
        {
            int q;
            q=v[high];
            v[high]=v[low];
            v[low]=q;
            p=p+1;
            low=low+1;
            high=high-1;
        }
        if(v[low]%2==0)
        {
            p=p+1;
            low=low+1;
        }
        if(v[high]%2==1)
        {
            high=high-1;
        }
    }
    
}
int main()
{
    int x;
    cin>>x;
    int zero=0;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
    int y;
    cin>>y;
    v.push_back(y);
    }
    oddEven(v,x);
  
    for(int i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}
