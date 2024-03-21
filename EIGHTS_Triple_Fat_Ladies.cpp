#include <iostream>
using namespace std;
typedef long long ll;

bool ThreeDigitsEnd(ll x){
    for(int i = 0; i < 3; i++){
        int lastDigit = x % 10;
        if(lastDigit != 8) return false;
        x /= 10;
    }
    return true;
}
int main(){
    // for(int i = 1; i <= 10000; i++){
    //     ll tmp = 1ll * i * i * i;
    //     if(ThreeDigitsEnd(tmp)) cout << i << endl;
    // }
    ll k, tc;
    cin >> tc;
    while(tc--){
        cin >> k;
        cout << (k - 1) * 250 + 192 << endl;
    }

    return 0;
}