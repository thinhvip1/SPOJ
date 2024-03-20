#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
//do st
bool check(char a, char b){
    int num = (int)(a - 48) * 10 + (int)(b-48);
    if(a != '0' && num <= 26) return true;
    return false;
}
int main(){
    string s;
    do{
        ll dp[5001]; 
        fill(dp, dp + 5001, 0);
        dp[0] = 1;
        dp[1] = 1;
        cin >> s;
        if(s != "0"){
            for(int i = 2; i <= s.size(); i++){
                if(s[i-1] > '0') dp[i] = dp[i-1];
                if(check(s[i-2], s[i-1])) dp[i] += dp[i-2];
            }
            cout << dp[s.size()] << endl;
        }
    }while(s != "0");
    return 0;
}