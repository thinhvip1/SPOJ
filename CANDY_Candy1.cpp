#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(n!=-1){
        cin >> n; if(n==-1) break;
        int a[n], sum=0;
        for(int i = 0; i < n; i++){
            cin >> a[i]; sum+=a[i];
        }
        int r = sum%n, fair = sum/n, cnt = 0;
        if(r!=0){
            cout << "-1" << endl; continue;
        } 
        for(int i = 0; i < n; i++){
            if(a[i]>fair) cnt += a[i]-fair;
        }
        cout << cnt << endl;
    }
}