#include <bits/stdc++.h>
using namespace std;
double solve(int n){
    if(n==1) return 1.0/2;
    return solve(n-1) + 1.0/(n+1);
}
int main(){
    double x;
    while(cin >> x && x){
        int i = 1;
        while(solve(i) < x) i++;
        cout << i << " card(s)\n";
    }
}