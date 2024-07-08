Program-:print plus pattern 
input-:5
 Output-: 
  *
  *
*****
  *
  *
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int k=x/2+1;
    for(int i=1;i<=x;i++)
    {
        if(i<k ||i>k)
        {
        for(int s=x/2;s>0;s--)
        {
            cout<<" ";
        }
        }
      for(int j=1;j<=x;j++)
      {
        if(i==k||j==k)
        {
            cout <<"*";
        }
      }
      cout<<endl;
    }
}
