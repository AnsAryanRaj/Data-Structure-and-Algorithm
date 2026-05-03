// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// void bfs(int start, vector<int> adj[], int n) {
//     vector<bool>visited(n, false);
//     queue<int>q;
//     q.push(start);
//     visited[start]=true;
//     while (q.size()>0) {
//         int node=q.front();
//         q.pop();
//         cout<<node<<" ";
//
//         for (int neigh: adj[node]) {
//             if (!visited[neigh]) {
//                 visited[neigh]=true;
//                 q.push(neigh);
//             }
//         }
//     }
// }
//
// int main() {
//     int n=5; //number of nodes
//     vector<int> adj[n];
//
//     //creating graph(undirected)
//     adj[0].push_back(1);
//     adj[1].push_back(0);
//
//     adj[1].push_back(2);
//     adj[2].push_back(1);
//
//     adj[1].push_back(3);
//     adj[3].push_back(1);
//
//     adj[2].push_back(4);
//     adj[4].push_back(2);
//
//     cout<<"BFS Traversal: ";
//     bfs(0, adj, n);
//     return 0;
//
// }