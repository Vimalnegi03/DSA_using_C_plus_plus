#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string str1, string str2) 
{
    unordered_map<char, int> m1;
    unordered_map<char,int>m2;
    for(auto i:str1) {
        m1[i]++;

}

for(auto i:str2){
    if(m1.find(i)==m1.end())
    return false;
    else
    {
        m1[i]--;
    }
}
    for(auto ele:m1)
    {
        if(ele.second!=0)
            return false;
    }
    return true;

}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<(checkAnagram(s,t) ? "yes":"NO")<<endl;
}
