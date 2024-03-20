#include <bits/stdc++.h>
using namespace std;
void act1(int n, int m){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((i%2==0 && j%2==0) || (i%2==1 && j%2==1)) cout << "*";
                else cout << ".";
            }
            cout << endl;
    }
}
void act2(int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(i==0 || i==l-1 || j==0 || j==c-1) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
}
void act3(int l, int c){
    int max_l = 3*l+1;
    int max_c = 3*c+1;
    for(int i = 0; i < max_l; i++){
        for(int j = 0; j < max_c; j++){
            if(i%3==0 || j%3==0) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
}
void act4(int l, int c, int h, int w){
    int max_l = (h+1)*l + 1,
    max_c = (w+1)*c + 1;
    for(int i = 0; i < max_l; i++){
        for(int j = 0; j < max_c; j++){
            if(i%(h+1)==0 || j%(w+1)==0) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
}
void act5(int l, int c, int s){
    int max_l = (s+1)*l + 1;
    int max_c = (s+1)*c + 1;
    for(int i = 0; i < max_l; i++){
        for(int j = 0; j < max_c; j++){
            if(i%(s+1)==0 || j%(s+1)==0) cout << "*";
            else if()
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int l, c, s; cin >> l >> c >> s;
        act5(l, c, s);
        cout << endl;
    }
}