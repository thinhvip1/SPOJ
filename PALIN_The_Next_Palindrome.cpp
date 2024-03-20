#include <bits/stdc++.h>
using namespace std;

// cộng thêm 1 đơn vị 
string add1(string k){
    string res = "";
    int carry = 1;
    for(int i = k.size()-1; i>= 0; i--){
        int sum_cs = (k[i]-48) + carry;
        res = (char)(sum_cs%10+48) + res;
        carry = sum_cs/10;
    }
    if(carry) res = '1' + res;
    return res;
}

// đảo chuỗi
string resverse(string s){
    string res = "";
    for(int i = s.size()-1; i >= 0; i--){
        res += s[i];
    }
    return res;
}

// kiểm tra xem số có phải toàn chữ số 9 không
bool full9(string s){
    for(char c : s)
        if(c != '9') return false;
    return true;
}

// xâu đối xứng nhỏ nhất lớn hơn s
string palindrome(string s){
    if(full9(s)) return "1" + string(s.size()-1, '0') + "1";
    int n = s.size();
    string tmp, res;
    if(n&1){
        tmp = s.substr(0, n/2 + 1); 
        do{
            res = tmp + resverse(tmp.substr(0, tmp.size()-1));
            tmp = add1(tmp);
        }while(res <= s);
    }
    else{
        tmp = s.substr(0, n/2);
        do{
            res = tmp + resverse(tmp);
            tmp = add1(tmp);
        }while(res <= s);
    }
    return res;
}

// giải quyết
string solve(string s){
    string res = ""; int add = 1;
    // cộng số ban đầu với 1 rồi đảo ngược
    for(int i = s.size()-1; i >= 0; i--){
        int sum = (int)(s[i] - 48 + add);
        res += (char)(sum%10 + 48);
        add = sum/10;
    }
    if(add) res += '1';

    // 
    int n = res.size();
    for(int i = 0; i < n/2; i++){
        if(res[i] > res[n-i-1]) 
            for(int j = i+1; j < n; j++){
                res[j]++;
                if(res[j] > '9') res[j] = '0';
                else 
                    break;
            }
        res[i] = res[n-i-1]; // đối xứng xâu
    }
    return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int tc; cin >> tc;
    while(tc--){
        string k; cin >> k;
        // cout << palindrome(k) << endl;
        cout << solve(k) << endl;
    }
    return 0;
}