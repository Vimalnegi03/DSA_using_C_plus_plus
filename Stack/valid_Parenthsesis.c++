#include<bits/stdc++.h>
using namespace std;
bool checkValid(string &s)
{
    stack<char> s1;
 for(int i=0;i<s.size();i++)
 {
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    {
        s1.push(s[i]);
    }
    else if(s1.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']'))
    return false;
    else
    {
        if(s[i] == ')' && s1.top()=='(')
        s1.pop();
       else if(s[i] == '}' && s1.top()=='{')
        s1.pop();
        else if (s[i] == ']' && s1.top()=='[')
        s1.pop();
        else
        return false;
    }
 }
 if(s1.empty())
 
 return true;
 return false;
}
int main()
{
    string s;
    cin>>s;
    bool ans=checkValid(s);
    cout<<ans;

}
