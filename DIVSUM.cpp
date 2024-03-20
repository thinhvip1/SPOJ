#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll divsum(int n){
    if(n==1) return 0;
    ll sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            sum += i;
            if(i == n/i) continue;
            sum += n/i;
        }
    }
    return sum;    
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << divsum(n) << endl;
    }
}