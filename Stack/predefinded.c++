#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(5);
    st.push(56);
    st.push(9);
    st.pop();//removes the top element of the stack
    cout<<st.top()<<endl;
}
