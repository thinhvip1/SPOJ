#include <bits/stdc++.h>

using namespace std;

string product(string a, int b){
    string res = "";
    int carry = 0;
    for(int i = a.size()-1; i >= 0; i--){
        int pro_cs = (a[i]-48)*b + carry;
        res = (char)(pro_cs%10+48) + res;
        carry = pro_cs/10;
    }
    if(carry)
        res = to_string(carry) + res;       
    return res;
}
string gt(int n){
    string res = "1";
    for(int i = 2; i <= n; i++){
        res = product(res,i);
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << gt(n) << endl;
    }
}