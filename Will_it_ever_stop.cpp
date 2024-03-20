#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    double res = log2(n);
    if(res == (int) res) cout << "TAK";
    else cout << "NIE";
}