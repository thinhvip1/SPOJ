#include <bits/stdc++.h>
using namespace std;
//1 5 6
//4 -> 6 || 9 -> 1
//2 8 -> 4 -> 6 || 3 7 -> 9 -> 1 
int pow_mod(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res *= a;
            res %= 10;
        }
        b>>=1;
        a *= a;
        a %= 10;
    }
    return res;
}
// int lastdigit(int a, int b){
//     int r = a%10;
//     if(b==1 || r==0|| r==1 || r==5 || r==6) return r;
//     if(b==2||b==3) return pow_mod(r,b);
//     return pow_mod(r,4+(b%4));
// }
int main(){
    int tc; cin >> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        cout << pow_mod(a,b) << endl;
    }
    return 0;
}