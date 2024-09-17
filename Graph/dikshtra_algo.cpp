#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

void dijkstra(int source, vector<vector<pii>>& adj, vector<int>& dist) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<pii>> adj(n);

    // Edges in the form (u, v, w) where u is the start node,
    // v is the end node, and w is the weight of the edge.
    vector<vector<int>> edges = {
        {0, 1, 4},
        {0, 2, 1},
        {2, 1, 2},
        {1, 3, 1},
        {2, 3, 5},
        {3, 4, 3}
    };

    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // For undirected graph, add this line
    }

    int source = 0;
    vector<int> dist(n, INT_MAX);

    dijkstra(source, adj, dist);

    cout << "Vertex\tDistance from Source" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << "\t" << dist[i] << endl;
    }

    return 0;
}
