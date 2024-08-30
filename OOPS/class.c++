#include<bits/stdc++.h>
using namespace std;
class Fruit {
    public:
 string name;
 string color;
};
int main() {
Fruit apple;//Object
apple.name = "Red Apple";
apple.color = "Red";
cout<<apple.name<<" "<<apple.color<<endl;

Fruit *mango=new Fruit();
mango->name= "Green Mango";
mango->color="Yellow";
}
