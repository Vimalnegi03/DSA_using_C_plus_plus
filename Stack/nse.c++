#include<bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int>&v)
{
    int n=v.size();
    vector<int>output(n,-1);
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
    while(!st.empty() && v[i]<v[st.top()])
    {
     output[st.top()]=v[i];
     st.pop();
    }
     st.push(i);
    }
    while(!st.empty())
    {
        output[st.top()]=-1;
        st.pop();
    }
    return output;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v;
 while(n--)
 {
    int x;
    cin>>x;
    v.push_back(x);
 }
 vector<int>res = nse(v);
 cout<<"Next Greater Elements are"<<endl;
 for(int i=0;i<res.size();i++)
 {
    cout<<res[i]<<" ";
 }
}
