#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>s1;
    s1.insert(5);
     s1.insert(3);
      s1.insert(2);
       s1.insert(5);
        s1.insert(4);
         s1.insert(1);
          s1.insert(6);
          unordered_multiset<int>::iterator itr;
          itr=s1.begin();
          advance(itr,1);
          for(auto value:s1)
          {
            cout<<value<<" ";
          }
}
