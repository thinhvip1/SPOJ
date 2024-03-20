#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll max(ll a, ll b){
    return a >= b ? a : b;
}
// đệ quy + dp
ll maxdollars(ll n, unordered_map <ll, ll> &mem){
    if(n <= 1) return n;
    if(mem.find(n) != mem.end()) return mem[n];
    ll dollars = max(n, maxdollars(n/2,mem) + maxdollars(n/3,mem) + maxdollars(n/4,mem));
    mem[n] = dollars;
    return dollars;
}
int main(){
    unordered_map<ll, ll> mem;
    ll n;
    while (cin >> n){
        cout << maxdollars(n, mem) << endl;
    }
}
