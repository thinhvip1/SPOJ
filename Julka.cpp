#include <bits/stdc++.h>
using namespace std;
string removeLeadingZeros(const string &num) {
    // Tìm vị trí của ký tự đầu tiên khác 0
    size_t pos = num.find_first_not_of('0');
    
    // Nếu không tìm thấy ký tự khác 0, trả về "0"
    if (pos == string::npos) {
        return "0";
    }
    
    // Trả về phần chuỗi từ vị trí pos đến hết chuỗi
    return num.substr(pos);
}
string difference(string a, string b){
    if(a.size() < b.size()) return difference(b,a);
    string res = "";
    while(b.size() < a.size()) b = "0" + b;
    int carry = 0;
    for(int i = a.size()-1; i >= 0; i--){
        int dif_cs = a[i] -(b[i]+carry);
        if(dif_cs<0){
            dif_cs += 10;
            carry = 1;
        }
        else carry = 0;
        res = (char)(dif_cs+48) + res;
    }
    return removeLeadingZeros(res);
}
string half(string a){
    string res = "";
    int i = (a[0] > 1) ? 0 : 1;
    int carry = 0;
    while(i < a.size()){
        int tmp = a[i] - 48 + carry * 10;
        res = res + (char)(tmp/2+48);
        carry = tmp%2;
        i++;
    }
    return removeLeadingZeros(res);
}
int main(){
    int tc = 10;
    while(tc--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        string Klau, Nata;
        Nata = half(difference(a,b));
        Klau = difference(a,Nata);
        cout << Klau << endl;
        cout << Nata << endl;
    }
}