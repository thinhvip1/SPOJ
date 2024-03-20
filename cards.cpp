#include <bits/stdc++.h>
#define MOD 1000007
typedef long long ll;
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll res;
        res = (1ll*(n+1)*n/2 * 3 - n )% MOD;
        cout << res << endl;
    }
}