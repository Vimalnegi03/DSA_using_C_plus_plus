Program to print area and circum ference of circle
#include<bits/stdc++.h>
using namespace std;
void circle(int r)
{
 double circumference = 2*3.14*r;
 cout<<"the circumference is "<<circumference<<endl;
 double area =3.14 * r*r;
 cout<<"The area of the circle is "<<area<<endl;
}
int main()
{
    int r;
    cout<<"enter your radius"<<endl;
    cin>>r;
    circle(r);
    return 0;
}
