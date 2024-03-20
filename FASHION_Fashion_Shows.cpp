#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*) a;
    int *y = (int*) b;
    if(*x < *y) return -1;
    return 1;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n],b[n];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        qsort(a,n,sizeof(int),cmp);
        qsort(b,n,sizeof(int),cmp);
        for(int i = 0; i < n; i++){
            res += a[i]*b[i];
        }
        cout << res << endl;
    }
    return 0;
}