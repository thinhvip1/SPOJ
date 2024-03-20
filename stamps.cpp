#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
void SelectionSort(vector<int> &v, int n){
    for(int i = 0; i < n - 1; i++){
        int m = i;
        for(int j = i + 1; j < n; j++){
            if(v[m] < v[j]) m = j;
        }
        if(i!=m) swap(v[i],v[m]);
    }
}
int main(){
    int t; cin >> t;
    for(int k = 1; k <= t; k++){
        int m, n; cin >> m >> n;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        SelectionSort(v, n);
        for(int i = 1; i < n; i++){
            v[i] += v[i-1];
        }
        int res; bool flag = false;
        for(int i = 0; i < n; i++){
            if(v[i] >= m){
                res = i + 1;
                flag = true;
                break;
            }
        }
        cout << "Scenario #" << k << ":\n";
        if(flag){
            cout << res << endl;
        }
        else cout << "impossible\n";
        cout << endl;
    }
}