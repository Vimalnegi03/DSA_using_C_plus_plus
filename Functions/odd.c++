Program to print all odd numbers
#include<bits/stdc++.h>
using namespace std;
void odd(int i)
{
    if(i%2==1)
    {
        cout<<i<<" ";
    }
}
int main()
{
 int l,r;
 cin>>l>>r;
 for(int i=l;i<=r;i++)
 {
    odd(i);
 }
}
