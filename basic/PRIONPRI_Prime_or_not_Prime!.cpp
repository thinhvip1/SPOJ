#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// bool isPrime[1000000001];
vector<bool> isPrime(1000000001, true);

void SieveEratos(){
    // fill(isPrime, isPrime + 1000000001, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= sqrt(1000000000); i++){
        if(isPrime[i] == true)
            for(int j = i * i; j <= 1000000000; j += i){
                if(isPrime[j] == true) 
                    isPrime[j] = false;
            }
    }
}
bool Is_Prime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0) return false;
    return n > 1;
}
int main(){
    // SieveEratos();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if(Is_Prime(n) == true) cout << "YES\n";
        else cout << "NO\n";
    }
}