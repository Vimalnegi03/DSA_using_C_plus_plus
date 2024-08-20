#include<bits/stdc++.h>
using namespace std;
stack<int> copyStack(stack<int>& s) 
{
    stack<int>temp;
    while(s.empty()==false)
    {
        int y=s.top();
        s.pop();
    temp.push(y);
    }
    while(temp.empty()!=1)
    {
        int y=temp.top();
        temp.pop();
        s.push(y);
    }
    return s;
}
int main()
{
 stack <int> s;

 s.push(4);
  s.push(5);
   s.push(6);
    s.push(7);
     s.push(8);
     stack<int>ans=copyStack(s);
      cout<<"The elements in the copied Stack are : ";
       while(!ans.empty())
         {
           cout << ans.top() << " ";
           ans.pop();
         }
          cout << endl;
return 0;
}
