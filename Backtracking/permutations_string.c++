#include<bits/stdc++.h>
using namespace std;
void permutation (string &str,int i)
{
    if(i==str.size())
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.size();j++)
    {
     swap(str[i],str[j]);
     permutation(str,i+1);
     swap(str[i],str[j]);//to revert the changes made into main string

    }
}
int main()
{
string s="ABC";
permutation(s,0);
}
