// #include<iostream>
// #include<vector>
// using namespace std;
//
// void dfs(int node, vector<int> adj[], vector<bool> &vis) {
//     vis[node] = true;
//
//     for(int neigh : adj[node]) {
//         if(!vis[neigh]) {
//             dfs(neigh, adj, vis);
//         }
//     }
// }
//
// int countConnectedComponentsDFS(int n, vector<int> adj[]) {
//     vector<bool> vis(n, false);
//     int count = 0;
//
//     for(int i = 0; i < n; i++) {
//         if(!vis[i]) {
//             dfs(i, adj, vis);
//             count++;
//         }
//     }
//
//     return count;
// }
//
// int main() {
//     int n = 5;
//     vector<int> adj[n];
//
//     // Graph:
//     // 0-1-2   3-4
//     adj[0].push_back(1);
//     adj[1].push_back(0);
//
//     adj[1].push_back(2);
//     adj[2].push_back(1);
//
//     adj[3].push_back(4);
//     adj[4].push_back(3);
//
//     cout << "Connected Components: "
//          << countConnectedComponentsDFS(n, adj);
//
//     return 0;
// }