#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;
    Rectangle()
    {
        l=0;
        b=0;
    }
    Rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    Rectangle(Rectangle &r)
    {
        l=r.l;
        b=r.b;
    }
    ~Rectangle()
    {
    cout<<"destructor is called";
    }
};
int main()
{
    Rectangle r1;
    cout<<r1.l<<r1.b;
    Rectangle r2(3,4);
    cout<<r2.l<<r2.b;
    Rectangle r3=r2;
}
