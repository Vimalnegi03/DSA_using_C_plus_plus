#include<bits/stdc++.h>
using namespace std;
 int secondHighest(string s) {
        set<int,greater<int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                int y=s[i]-'0';
            st.insert(y);
            }
        }
        if(st.size()==1)
        return -1;
        set<int>::iterator it;
        it=st.begin();
        advance(it,1);
        return *it;
    }
    int main()
    {
        string s="dfa12321afd";
       cout<< secondHighest(s);
        
    }
