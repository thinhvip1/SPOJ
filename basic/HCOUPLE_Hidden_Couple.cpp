#include <iostream>
using namespace std;

int main(){
    int tc; cin >> tc;
    cin.ignore();
    for(int i = 1; i <= tc; i++){
        string name; getline(cin, name);
        int sum = 0;
        for(char c : name) sum += (int)c;
        cout << "Case " << i << ": ";
        if(sum%3==0) cout << "Yes\n";
        else cout << "No\n";
    }
}