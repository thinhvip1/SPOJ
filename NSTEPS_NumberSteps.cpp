#include <bits/stdc++.h>
using namespace std;
int check(int x, int y){
    if(x==y){
        if(!(x&1) && !(y&1)) return 1;
        else if(x&1 && y&1) return 2;
    }
    else if(x-y==2){
        if(!(x&1) && !(y&1)) return 3;
        else if(x&1 && y&1) return 4;
    }
    return 0;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int x, y; cin >> x >> y;
        if(check(x,y)==1) cout << 2*x << endl;
        else if(check(x,y)==2) cout << 2*x - 1 << endl;
        else if(check(x,y)==3) cout << x+y << endl;
        else if(check(x,y)==4) cout << x+y-1 << endl;
        else if(check(x,y)==0) cout << "No Number" << endl;
    }
}