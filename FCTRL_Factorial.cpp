#include <bits/stdc++.h>

using namespace std;
int cnt(int n){
    int res = 0; 
    for(int i = 5; i <= n; i*=5)
        res += n/i;
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << cnt(n) << endl;
    }
}