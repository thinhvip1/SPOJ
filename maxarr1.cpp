#include <bits/stdc++.h>
using namespace std;
int A[100000];
void Sieve(){
    A[1] = 1;
    for(int i = 2; i <= 100000; i++){
        if((i&1)!=1) A[i] = A[i/2];
        else A[i] = A[i/2] + A[i/2+1];
    }
}
int main(){
    Sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if((n&1)==1) cout << A[n] << endl;
        else cout << A[n-1] << endl;
    }
}
