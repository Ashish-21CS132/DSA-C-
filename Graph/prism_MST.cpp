#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
{
    // code here
    vector<int> key(V, INT_MAX);
    vector<bool> mst(V, 0);
    vector<int> par(V, -1);

    key[0] = 0;

    for (int i = 0; i < V; i++)
    {
        int mini = INT_MAX;
        int u;

        for (int v = 0; v < V; v++)
        {
            if (mst[v] == 0 && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }

        mst[u] = 1;

        for (auto nei : adj[u])
        {
            if (mst[nei[0]] == 0 && nei[1] < key[nei[0]])
            {
                par[nei[0]] = u;
                key[nei[0]] = nei[1];
            }
        }
    }
}
int main()
{
    return 0;
}