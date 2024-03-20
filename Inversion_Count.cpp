#include <bits/stdc++.h>
using namespace std;
// using ll = long long;
typedef long long ll;
ll merge(vector<int> &v, int l, int m, int r){
    vector<int> x(v.begin()+l, v.begin()+m+1);
    vector<int> y(v.begin()+m+1, v.begin()+r+1);
    int i = 0, j = 0;
    ll cnt = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]) v[l] = x[i++];
        else{
            v[l] = y[j++];
            cnt += x.size() - i*1ll;
        }
        l++;
    }
    while(i < x.size()) v[l++] = x[i++];
    while(j < y.size()) v[l++] = y[j++];
    return cnt;
}
ll cnt_inversion(vector<int> &v, int l, int r){
    ll cnt = 0;
    if(l < r){
        int m = (l+r)/2;
        cnt += cnt_inversion(v,l,m);
        cnt += cnt_inversion(v,m+1,r);
        cnt += merge(v,l,m,r);
    }
    return cnt;
}
int main(){
    int t; cin >> t;
    while(t--){
        cout << endl;
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        cout << cnt_inversion(v, 0, n-1);
    }
}