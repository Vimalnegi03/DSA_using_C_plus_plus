#include<bits/stdc++.h>
using  namespace std;
void prime(int n)
{
    int count=0;
    for(int i =2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
        if(count==0)
        {
            cout<<n<<" ";
        }

}
int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        prime(i);
    }
}
