// #include <stdio.h>
//
// int graph[10][10], visited[10], n;
//
// void dfs(int node) {
//     visited[node] = 1;
//     printf("%d ", node);
//
//     for (int i = 0; i < n; i++) {
//         if (graph[node][i] == 1 && !visited[i]) {
//             dfs(i);
//         }
//     }
// }
//
// int main() {
//     int edges, u, v, start;
//
//     printf("Enter number of vertices: ");
//     scanf("%d", &n);
//
//     for (int i = 0; i < n; i++) {
//         visited[i] = 0;
//         for (int j = 0; j < n; j++) {
//             graph[i][j] = 0;
//         }
//     }
//
//     printf("Enter number of edges: ");
//     scanf("%d", &edges);
//
//     printf("Enter edges (u v):\n");
//     for (int i = 0; i < edges; i++) {
//         scanf("%d %d", &u, &v);
//         graph[u][v] = 1;
//         graph[v][u] = 1;
//     }
//
//     printf("Enter starting node: ");
//     scanf("%d", &start);
//
//     printf("DFS Traversal: ");
//     dfs(start);
//
//     return 0;
// }