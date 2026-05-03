// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
//
// void bfs(int start, vector<int> adj[], vector<bool> &vis) {
//     queue<int> q;
//     vis[start] = true;
//     q.push(start);
//
//     while(!q.empty()) {
//         int node = q.front();
//         q.pop();
//
//         for(int neigh : adj[node]) {
//             if(!vis[neigh]) {
//                 vis[neigh] = true;
//                 q.push(neigh);
//             }
//         }
//     }
// }
//
// int countConnectedComponentsBFS(int n, vector<int> adj[]) {
//     vector<bool> vis(n, false);
//     int count = 0;
//
//     for(int i = 0; i < n; i++) {
//         if(!vis[i]) {
//             bfs(i, adj, vis);
//             count++;
//         }
//     }
//
//     return count;
// }