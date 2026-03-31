#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 4; // number of nodes
    vector<int> adj[n];

    // edges
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    // print adjacency list
    for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        for(auto it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
}