#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    int res = 0, i = 1, j =1;
    int max = sqrt(n)+1;
    for(int i = 1; i < max; i++){
        for(int j = i; i*j <= n; j++){
            res++;
        }
    }
    cout << res;
}