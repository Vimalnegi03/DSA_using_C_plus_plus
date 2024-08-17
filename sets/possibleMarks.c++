#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p>>q;
    //correct answers//
    unordered_set<int>s;
    for(int i=0;i<=n;i++)
    {
        //incorrect
        for(int j=0;j<=n;j++)
        {
          int correct=i;
          int incorrrect=j;
          int unattempted=n-i-j;
        if(unattempted>=0)
        {
            int score =correct*p+incorrrect*q;
            s.insert({score,-1});
        }
        }
    }
    for(auto value:s)
    {
        cout<<value<<" "<<endl;
    }
    cout<<s.size();
}
