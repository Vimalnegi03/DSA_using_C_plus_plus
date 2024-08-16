#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    //multiset<int ,greater<int>>ms to print value in descending order vector<vector<int>>v(n,vector<int>(m))
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    for(auto value:ms)
    {
        cout<<value<<" ";
    }
}
