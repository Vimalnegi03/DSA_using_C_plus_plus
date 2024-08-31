#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;

};
bool cmp(Item i1,Item i2)
{
    //custom comparator for sorting
double v_w_i1=static_cast<double>(i1.value/i1.weight);
double v_w_i2=static_cast<double>(i2.value/i2.weight);
return v_w_i1>v_w_i2; //if true i1 will be returned else i2
}
double fractional(int w,vector<Item>&items)
{
 sort(items.begin(),items.end(),cmp);
 double ans =0;
 for(const auto &item:items)
 {
    if(item.weight <=w)
    {
        ans+=item.value;
        w=w-item.weight;
    }
    else
    {
        //space is less
        double fraction=static_cast<double>(w)/item.weight;
        ans+=fraction*item.value;
        w=0;
    }
 }
 return ans;
}
int main()
{
   int n,W;
   cin>>n>>W;
   vector<Item>items;
   for(int i=0;i<n;i++)
   {
      int v,w;
      cin>>v>>w;
      Item it;
      it.value=v;
      it.weight=w;
      items.push_back(it);
   }
   cout<<fractional(W,items);
}
