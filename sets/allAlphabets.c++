#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //transform function is used to make changes on a string it contains iterators the first two iterator deals with the strings on which the changes needed to be performed 
    //the next deal with string on which we have to strore the result
    //and then then the function that you want to execute;
    if(s.size()<26)
    return false;
  transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> st;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    if(st.size()==26)
    return true;
    else
    return false;
}
