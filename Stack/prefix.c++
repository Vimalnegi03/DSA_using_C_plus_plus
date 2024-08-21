#include<bits/stdc++.h>
using namespace std;
int calc(int v1,int v2,char op)
{
if(op=='^')
{
    return pow(v1,v2);
}
else if(op=='*')
{
    return v1*v2;
}
else if(op=='/')
return v1/v2;
else if(op=='+')
return v1+v2;
else
return v1-v2;
}
int main()
{
    string s;
    cin>>s;
    stack<int>st;
    for(int i=s.size()-1;i>=0;i--)
    {
     if(isdigit(s[i]))
     {
        int y=s[i]-'0';
        st.push(y);
     }
     else
     {
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        int c=calc(b,a,s[i]);
        st.push(c);
     }
    }
    cout<<st.top();

}
