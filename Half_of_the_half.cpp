#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin,s);
        for(int i = 0; i < s.size()/2; i += 2){
            cout << s[i];
        }
        cout << endl;
    }
}