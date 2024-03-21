#include <iostream>
#include <vector>
// #include <cstdlib>
// #include <algorithm>
using namespace std;

void transform(vector<int> adj_list[], int n){
    for(int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
}

int ans = -1, farthestNode;
void longestPath(vector<int> adj_list[], int currNode, bool visited[], int distance){
    visited[currNode] = true;

    if(ans < distance){
        ans = distance;
        farthestNode = currNode;
    } 

    // kiểm tra các nút con của nút hiện tại
    for(int child : adj_list[currNode]){
        if(visited[child] == false){
            longestPath(adj_list, child, visited, distance + 1); // back track
        }  
    }
}
int main(){
    bool visited[10001]; // kiểm tra xem nút đã được thăm hay chưa
    fill(visited, visited + 10001, false);
    int cnt = 0;

    vector<int> adj_list[10001]; // lưu trữ các đỉnh kề của 1 đỉnh

    int n; // số nút của cây
    cin >> n;

    transform(adj_list, n); // chuyển danh sách cạnh thành danh sách kề

    longestPath(adj_list, 1, visited, 0); // tìm nút xa nhất 

    fill(visited, visited + 10001, false); // reset lại mảng 
    ans = -1;

    longestPath(adj_list, farthestNode, visited, 0);
    cout << ans;
}