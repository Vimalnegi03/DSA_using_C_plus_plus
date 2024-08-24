#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>res;
void permutation(vector<int>&str,int i)
{
  if(i==str.size())
    {
        
        res.push_back(str);
        return;
    }
    for(int j=i;j<str.size();j++)
    {
     swap(str[i],str[j]);
     permutation(str,i+1);
     swap(str[i],str[j]);//to revert the changes made into main string

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
       permutation(nums,0);
       return res; 
    }
    int main()
    {
        vector<int>nums={1,2,3};
        vector<vector<int>>ans=permute(nums);
       for(int i=0;i<ans.size();i++)
       {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
       }
    }
