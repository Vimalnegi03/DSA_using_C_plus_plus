Problem Statement-:We are given two values l and r and an array we need to calculate the sum of the element present between l and r including l and r
input-:[1,3,5,7,9] l=3,r=7
  Output=15

  #include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> a(n + 1);
for (int i = 1; i <= n; i++) {
cin >> a[i];
}
for (int i = 1; i <= n; i++) {
a[i] += a[i - 1];
}
int q;
cin >> q;
while (q--) {
int l, r;
cin >> l >> r;

cout << a[r] - a[l - 1] << endl;
}
}
