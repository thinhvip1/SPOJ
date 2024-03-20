#include <bits/stdc++.h>
using namespace std;
int way(int n){
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += i*i;
    }
    return res;
}
int main(){
    while(1){
        int n; cin >> n;
        if(!n) break;
        cout << way(n) << endl;
    }
}