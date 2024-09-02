#include<bits/stdc++.h>
using namespace std;
void large_small(int *x,int*y,int*z)
{
    int a=*x;
    int b=*y;
    int c=*z;
    if(a>b&&a>c)
    {
        cout<<"Large number is "<<a<<endl;
        if(b>c)
        {
            cout<<"smaller no.is"<<c;
        }
        else
        {
            cout<<"smaller no.is"<<b;
        }
    }
    else if(b>a&&b>c)
    {
        cout<<"Large number is "<<b;
          if(a>c)
        {
            cout<<"smaller no.is"<<c;
        }
        else
        {
            cout<<"smaller no.is"<<a;
        }
    }
    else
    {
    cout<<"Large number is "<<c;
      if(b>a)
        {
            cout<<"smaller no.is"<<a;
        }
        else
        {
            cout<<"smaller no.is"<<b;
        }
        }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    
    large_small(&x,&y,&z);
}
