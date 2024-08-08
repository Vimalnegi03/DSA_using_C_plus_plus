#include<bits/stdc++.h>
using namespace std;
int main() {
map<string,int>m;
m.insert(make_pair("A",1));
m["B"]=6;
m.insert(make_pair("c",3));
cout<<"Size of map : "<<m.size()<<endl;
//To access the value corresponding to a key
for(auto element :m)
{
    cout<<element.first<<" "<<element.second<<endl;
}
//using iterator
map<string,int>::iterator i;
map<string,int>::reverse_iterator j;
for(i=m.begin();i!=m.end();i++)
{
    cout<<i->first<<" "<<i->second<<endl;
}
//reverse iterator
for(j=m.rbegin();j!=m.rend();j++)
{
    cout<<j->first<<" "<<j->second<<endl;
}

}
