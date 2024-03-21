#include <iostream>
#include <stack>
using namespace std;

bool check(int a[], int n){

    stack<int> st;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        while(!st.empty() && cnt == st.top()){
            st.pop();
            cnt++;
        }
        if(a[i] == cnt)
            cnt++;
        else if(!st.empty() && st.top() < a[i])
            return false;
        else st.push(a[i]);
    }
    return true;
}
int main(){
    int n;
    do{
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n != 0){
            if(check(a, n)) cout << "yes\n";
            else cout << "no\n"; 
        }
    }while(n != 0);

    return 0;
}