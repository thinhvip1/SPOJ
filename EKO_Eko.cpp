#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
//kiểm tra xem để răng cưa của máy cao req_height có thể cắt được ít nhất m (mét gỗ) được không
bool check(vector<int> height_tree, int n, int m, int req_height){ 
    ll sum_height = 0;
    for(int i = 0; i < n; i++){
        if(height_tree[i] > req_height)
            sum_height += 1ll * (height_tree[i] - req_height);
    }
    return sum_height >= m;
}

// using binary search to solve
int required_height(vector<int> height_tree, int n, int low, int high, int m){
    
    while(low <= high){
        int mid = (low + high)/2;
        if(check(height_tree, n, m, mid) == true) // nếu răng cưa cao mid (mét) mà chặt được >= m (mét gỗ) thì xét phần lớn hơn độ cao mid
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return high;
}
int main(){
    int n, m; 
    cin >> n >> m;

    int max_heigh = 0;
    int min_heigh = 1000000000;

    vector<int> height_tree(n);
    for(int i = 0; i < n; i++){
        cin >> height_tree[i]; // nhập chiều cao của n cây

        if(max_heigh < height_tree[i]) // tìm cây cao nhất
            max_heigh = height_tree[i];
        if(min_heigh > height_tree[i]) 
            min_heigh = height_tree[i]; // tìm cây thấp nhất
    }
    cout << required_height(height_tree, n, min_heigh, max_heigh, m); // in ra chiều cao tối thiểu của máy cưa để cắt được m (mét) gỗ
}