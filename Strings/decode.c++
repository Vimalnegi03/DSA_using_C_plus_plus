#include<bits/stdc++.h>
using namespace std;
string decode(string &s)
{
   string result=" ";
   //traversing through encoded string
   for(int i=0;i<s.size();i++)
   {
    if(s[i]!=']')
    {
        result.push_back(s[i]);
    }
    else{
   //extracting string from encoded string
   string str="";
   while(!result.empty() && result.back()!='[')//result.back() returns the last character of a string
   {
   str.push_back(result.back());
   result.pop_back();
   }
   //reversing the string
   reverse(str.begin(),str.end());
   //remove last character which is an opening bracket
   result.pop_back();
   //extract num from result
   string num="";
   while(!result.empty()&& result.back()>='0' && result.back() <= '9') 
   {
      num.push_back(result.back());
      result.pop_back();
   }
   //reverse the number
   reverse(num.begin(),num.end());
   //conver string to integer
   int number=stoi(num);
   //inserting str in result nums times
   while(number)
   {
    result+=str;
    number--;
   }

    }
   }
   return result;
}
int main()
{
    string s1;
    getline(cin,s1);
    string ans=decode(s1);
    cout<<ans;
}
