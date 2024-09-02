#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int *one=&x;
    int *two=&y;
    cout<<(*one)*(*two);
}

