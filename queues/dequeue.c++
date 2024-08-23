#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(5);
    d.push_front(10);
    d.push_back(15);
    d.push_front(20);
    d.pop_back();
    d.pop_front();
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }
}
