// #include<iostream>
// #include<vector>
// using namespace std;
//
// // DFS function
// bool dfs(int node, int parent, vector<int> adj[], vector<bool> &vis) {
//     vis[node] = true;
//
//     for(int neigh : adj[node]) {
//         if(!vis[neigh]) {
//             if(dfs(neigh, node, adj, vis)) {
//                 return true;
//             }
//         }
//         else if(neigh != parent) {
//             return true;
//         }
//     }
//     return false;
// }
//
// // Wrapper function (handles disconnected graph)
// bool hasCycle(int n, vector<int> adj[]) {
//     vector<bool> vis(n, false);
//
//     for(int i = 0; i < n; i++) {
//         if(!vis[i]) {
//             if(dfs(i, -1, adj, vis)) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
//
// int main() {
//     int n = 4;
//     vector<int> adj[n];
//
//
//     adj[0].push_back(1);
//     adj[1].push_back(0);
//
//     adj[1].push_back(3);
//     adj[3].push_back(1);
//
//     adj[3].push_back(2);
//     adj[2].push_back(3);
//
//     adj[2].push_back(0);
//     adj[0].push_back(2);
//
//     if(hasCycle(n, adj)) {
//         cout << "Cycle Detected\n";
//     } else {
//         cout << "No Cycle\n";
//     }
//
//     return 0;
// }