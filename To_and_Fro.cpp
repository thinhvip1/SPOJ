#include <bits/stdc++.h>
using namespace std;
void decryption(char c[], int m){
    int n = strlen(c)/m, cnt = 0;
    char p[n][m];
    for(int i = 0; i < n; i++){
        if(i%2==0)
            for(int j = 0; j < m; j++)
                p[i][j] = c[cnt++];
        else 
            for(int j = m-1; j >= 0; j--)
                p[i][j] = c[cnt++];    
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << p[j][i];
    }
}
int main(){
    int m;
    while(1){
        cin >> m; if(!m) break;
        char c[200];
        cin >> c;
        decryption(c,m);
        cout << endl;
    }
}