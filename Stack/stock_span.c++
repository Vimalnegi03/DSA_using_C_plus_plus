#include<bits/stdc++.h>
using namespace std;
vector<int>stock(vector<int>&v)
{
   int n=v.size();
   reverse(v.begin(),v.end());
    vector<int>output(n,-1);
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
    while(!st.empty() && v[i]>v[st.top()])
    {
     output[st.top()]=n-i-1;
     st.pop();
    }
     st.push(i);
    }
    while(!st.empty())
    {
        output[st.top()]=1;
        st.pop();
    }
    reverse(output.begin(),output.end());
    reverse(v.begin(),v.end());
    return output;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    vector<int>res=stock(v);
    res[0]=1;
    for(int i=0;i<res.size();i++)
    {
        cout<<(i-res[i])<<" ";
    }
}
