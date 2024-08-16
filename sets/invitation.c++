#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n;
    cin>>n;
    string str;
 for(int i=0;i<n;i++)
 {
    cin>>str;
    s.insert(str);
 }
 for(auto value:s)
 {
    cout<<value<<" ";
 }
}
