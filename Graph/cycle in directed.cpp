#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<bool> dfsvis;

bool iscyclic(unordered_map<int, vector<int>> &adj, int node)
{
    vis[node] = 1;
    dfsvis[node] = 1;

    for (auto nei : adj[node])
    {
        if (!vis[nei])
        {
            bool cycle = iscyclic(adj, nei);
            if (cycle)
                return 1;
        }
        else if (dfsvis[nei])  //if nei visted and dfsvis also visited then cycle is present
        {
            return 1;
        }
    }

    dfsvis[node] = 0;
    return 0;
}

bool canFinish(int n, vector<vector<int>> &pre)
{
    unordered_map<int, vector<int>> adj;

    for (auto e : pre)
    {
        adj[e[0]].push_back(e[1]);
    }

    vis.resize(n, 0);
    dfsvis.resize(n, 0);

    bool cycle;
    for (auto i : adj)
    {
        if (!vis[i.first])
        {
            cycle = iscyclic(adj, i.first);
            if (cycle)
                return 0;
        }
    }

    return 1;
}
int main()
{
    return 0;
}