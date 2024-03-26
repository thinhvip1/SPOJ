#include <iostream>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int m, n; cin >> m >> n;
        if(n%m == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}