#include <iostream>
#include <math.h>
using namespace std;

int check_snt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(!(n%i)) return 0;
    }
    return n > 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> m >> n;
        for(int i = m ; i < n + 1; i++){
            if(check_snt(i)) cout << i << endl;
        }
    }
    return 0;
}