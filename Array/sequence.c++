Program-:program to calculate whether zeroes are less in a binary array or one and double them
  
#include<bits/stdc++.h>
using  namespace std;
int main() {
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int one=0;
    int zero=0;
     for(int i=0;i<x;i++)
    {
        if(v[i]==0)
        {
            zero=zero+1;
        }
        else
        one=one+1;

}
    int k =   min(zero,one);
    cout<<k*2;

}
