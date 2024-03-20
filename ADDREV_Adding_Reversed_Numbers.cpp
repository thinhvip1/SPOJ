#include <bits/stdc++.h>

using namespace std;
int r_num(int n){
    int tmp = n, cnt = 0;
    while(tmp){
        tmp /= 10;
        cnt++;
    }
    int re_num = 0,mod; double p;
    while(n){
        mod = n % 10;
        p = pow(10,--cnt);
        re_num += (mod * p);
        n /= 10;
    }
    return re_num;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a = r_num(n);
        int b = r_num(m);
        cout << r_num(a+b) << endl;
    }
    return 0;
}