#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define infinity as a large enough value. This value will be used for
// vertices not connected to each other
const int INF = 1e9;

void floydWarshall(vector<vector<int>>& graph) {
    int V = graph.size();
    vector<vector<int>> dist = graph;

     
        // Set self-distances to 0
        for (int i = 0; i < V; ++i) {
            dist[i][i] = 0;
        }


    // Iterate over all possible intermediate vertices
    for (int k = 0; k < V; k++) {
        // Iterate over all possible starting vertices
        for (int i = 0; i < V; i++) {
            // Iterate over all possible ending vertices
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j, then update dist[i][j]
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Print the shortest distance matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }
}

int main() {
    int V = 4;
    vector<vector<int>> graph = {
        {0, 3, INF, 5},
        {2, 0, INF, 4},
        {INF, 1, 0, INF},
        {INF, INF, 2, 0}
    };

    floydWarshall(graph);

    return 0;
}
