#include<bits/stdc++.h>
using namespace std;
bool canmakeEqual(vector<string>v,int n){
unordered_map<char,int>um;

for(auto s:v)
{
    for(char c:s)
    {
        um[c]++;
    }
}

for(auto i : um)
{
    if(i.second % n!=0)
    return false;
    
}
return true;

}
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        string y;
        cin>>y;
        v.push_back(y);
    }
    cout<<(canmakeEqual(v,n)?"Yes":"NO")<<endl;
}
