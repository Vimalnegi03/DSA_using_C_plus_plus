#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=18;
    cout<<&x<<endl;
    int *ptr=&x;
    cout<<ptr;
    int marks=90;
    ptr=&marks;
    cout<<ptr<<"\n";
     cout<<*ptr<<endl;
int number=*ptr;
cout<<number<<endl;
}
