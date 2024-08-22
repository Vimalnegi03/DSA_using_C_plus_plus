#include<bits/stdc++.h>
using namespace std;
int count(string &s)
{
  stack<char>st;
  int count =0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    {
        st.push(s[i]);
    }
    else
    {
        if(!st.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']'))
        {
            if(st.top()=='(' && s[i]!=')')
            {
                count =count +1;
            }
             else if(st.top()=='{' && s[i]!='}')
            {
                count =count +1;
            }
             else if(st.top()=='[' && s[i]!=']')
            {
                count =count +1;
            }
            else
            {
                st.pop();
            }
        }
        else
        {
            count =count +1;
        }

    }
  }
  return count;
}
int main()
{
    string s;
    cin>>s;
    int ans=count(s);
    cout<<ans;
}
