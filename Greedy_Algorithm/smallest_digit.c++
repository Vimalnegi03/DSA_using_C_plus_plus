#include<bits/stdc++.h>
using namespace std;
void smallest(int d,int s)
{
    vector<char>v(d,0);
    if(9*d<s)
    {
        cout<<"-1";
    return;
    }
    int i;
    for( i=d-1;i>=0;i--)
    {
    v[i]='9';
    s-=9;
    if(s<9)
    break;
    }
    if(i==0)
    v[i]=char(s+'0');
    else{
        v[0]='1';
        v[i]=char(s-1+'0');
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}
int main()
{
    int d,s;
    cin>>d>>s;
}
