#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    cout<<"size is"<<s.size()<<endl;
    set<int>::iterator i;
    for( i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" "<<endl;
    }
    //for each loop auto key word is usedcwhen you dontc know the data typw of a variable 
    for(auto value:s)
    {
      cout<<value<<" ";
    }
}
