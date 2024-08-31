#include<bits/stdc++.h>
using namespace std;
struct meeting
{
    int start;
    int end;
    int idx;
};
bool comp(meeting m1,meeting m2)
{
    return m1.end<m2.end;
}
void print_maxMeetings(vector<meeting>&meet)
{
    sort(meet.begin(),meet.end(),comp);
    cout<<meet[0].idx<<" ";
    meeting last=meet[0];//last meeting;
    for(int i=0;i<meet.size();i++)
    {
     if(meet[i].start>last.end)
     {
        cout<<meet[i].idx<<" ";
        last=meet[i];
     }
    }

}
int main()
{
 int n;
 cin>>n;
 vector<meeting>arr;
 int i=0;
 while(n--)
 {
    int s,e;
    cin>>s>>e;
    i++;
    meeting m;
    m.start=s;
    m.end=e;
    m.idx=i;
    arr.push_back(m);

 }
 print_maxMeetings(arr);
}
