#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

// kiểm tra xem có thể đặt c con bò vào mảng a mà khoảng cách nhỏ nhất giữa 2 con bò là dist hay không
bool check(ll a[], int n, ll dist, int cows){// distance
    int last = a[0], cnt_cows = 1;
    for(int i = 1; i < n; i++){
        if(a[i] - last >= dist){
            cnt_cows++;
            last = a[i];
        }
        if(cnt_cows == cows) return true;
    }
    return false;
}

//vét cạn
ll solve(ll a[], int n, int cows){
    int i;
    for(i = 1; i <= a[n-1]-a[0]; i++){
        if(check(a, n, i, cows)) continue;
        else break;
    }
    return i-1;
}

// using binary search to solve
ll solve1(ll a[], int n, int low, int high, int cows){
    while(low <= high){
        int mid = (low + high)/2;
        if(check(a, n, mid, cows) == true){ // nếu k/c nhỏ nhất giữa 2 con bò đặt được ở vị trí mid thì ktra xem bên phải còn thỏa mãn không
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return high;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, c; cin >> n >> c;
        ll a[100000];
        for(ll &x : a) cin >> x;
        sort(a, a + n);
        // cout << solve(a, n, c) << endl;
        cout << solve1(a, n, 1, a[n-1]-a[0], c) << endl;
    }
}