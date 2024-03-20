#include <iostream>
#include <stack>
using namespace std;
string RPN(string s){
    string ans = "";
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else if(s[i] >= 97 && s[i] <= 122) ans += s[i];
        else if(s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^') st.push(s[i]);
        else if(s[i] == ')'){
            ans += st.top();
            st.pop(); st.pop();
        }
    }
    return ans;
}
int main(){
    int tc; cin >> tc;
    string s;
    while(tc--){
        cin >> s;
        cout << RPN(s) << endl;
    }
    return 0;
}