#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(vector<ll> v, int n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        sum %= n;
    }
    if(sum == 0) return true;
    return false;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        cout << endl;
        int n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(check(v,n)) cout << "YES";
        else cout << "NO";
    }
}