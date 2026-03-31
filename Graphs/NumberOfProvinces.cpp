#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>> &isConnected, vector<bool> &vis, int n) {
    vis[node] = true;

    for(int j = 0; j < n; j++) {
        if(isConnected[node][j] == 1 && !vis[j]) {
            dfs(j, isConnected, vis, n);
        }
    }
}

int findCircleNum(vector<vector<int>> &isConnected) {
    int n = isConnected.size();
    vector<bool> vis(n, false);
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            dfs(i, isConnected, vis, n);
            count++;
        }
    }
    return count;
}

int main() {
    vector<vector<int>> isConnected = {
        {1,1,0},
        {1,1,0},
        {0,0,1}
    };

    cout << "Number of Provinces: " << findCircleNum(isConnected);

    return 0;
}