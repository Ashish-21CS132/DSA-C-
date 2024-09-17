#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;

void dfs(vector<int> adj[], int node, vector<int> &ans)
{
    vis[node] = 1;
    ans.push_back(node);

    for (auto nei : adj[node])
    {
        if (!vis[nei])
            dfs(adj, nei, ans);
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    vis.resize(V, 0);

    dfs(adj, 0, ans);

    return ans;
}
int main()
{
    return 0;
}