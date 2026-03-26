// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
//
// void bfs(int start, vector<int> adj[], int n) {
//     vector<bool> visited(n, false);
//     queue<int> q;
//
//     q.push(start);
//     visited[start] = true;
//
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//
//         cout << node << " ";
//
//         for (int neigh : adj[node]) {
//             if (!visited[neigh]) {
//                 visited[neigh] = true;
//                 q.push(neigh);
//             }
//         }
//     }
// }
//
// int main() {
//     int n, m;
//     cout << "Enter number of nodes and edges: ";
//     cin >> n >> m;
//
//     vector<int> adj[n];
//
//     cout << "Enter edges (u v):\n";
//     for(int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//
//         // undirected graph
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//
//     int start;
//     cout << "Enter starting node: ";
//     cin >> start;
//
//     cout << "BFS Traversal: ";
//     bfs(start, adj, n);
//
//     return 0;
// }