#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x>>y;
    int *a=&x;
    int *b=&y;
    int k=*a;
    int z=*b;
    cout<<*a+*b;
}
