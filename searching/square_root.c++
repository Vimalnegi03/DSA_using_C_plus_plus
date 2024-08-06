#include<bits/stdc++.h>
using namespace std;
int square_root(int x)
{
    if(x==0||x==1)
    return x;
    int low=2;int high=x/2;
    while(low<=high)
    {
        int mid=(low +high)/2;
        if(mid*mid == x ) 
        return mid;
        else if(mid*mid>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return high;
}
int main()
{
    int x;
    cin>>x;
    cout<<square_root(x);
}
