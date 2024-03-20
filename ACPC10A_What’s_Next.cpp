#include <bits/stdc++.h>
using namespace std;
void check(int a, int b, int c){
    if(c==b+(b-a)) cout << "AP " << c + (b-a) << endl;
    else if(c==b*(b/a)) cout << "GP " << c*(b/a) << endl; 
}
int main(){
    int a, b, c;
    do{
        cin >> a >> b >> c;
        if(!a&&!b&&!c) break;
        check(a,b,c);
    }while(1);
}