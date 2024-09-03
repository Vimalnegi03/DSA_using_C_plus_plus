#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};

    int sum=0;
    for(int i=0;i<5;i++)
    {
       sum=sum+*(a+i);
    }
    cout<<sum;
}
