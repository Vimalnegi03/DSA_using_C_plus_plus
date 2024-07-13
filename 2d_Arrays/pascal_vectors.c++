Porgram-:Program to print pascal triangle using vectors
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> PascalTriangle(int n)
{
//  to store result 
vector<vector<int>> pascal(n);
for(int i=0;i<n;i++)
{
   pascal[i].resize(i+1);
    for(int j =0 ;j<=i;j++)
    {
        if(j==0||j==i)
        {
            pascal[i][j]=1;
        }
        else
        pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j] ; // adding the previous two numbers in each row of that particular column
    }
}
return pascal;
}
int main()
{
    vector<vector<int>>ans;
    int n;
    cin>>n;
    ans=PascalTriangle(n);
    // rows
    for(int i=0;i<ans.size();i++)
    {
        // columns
        for(int j=0;j<ans[i].size();j++)
        {
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
