#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
stack<int> st;

void dfs(vector<int> adj[], int node)
{
    vis[node] = 1;

    for (auto nei : adj[node])
    {
        if (!vis[nei])
            dfs(adj, nei);
    }
    st.push(node);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vis.resize(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
            dfs(adj, i);
    }

    vector<int> ans;
    while (!st.empty())
    {
        int ele = st.top();
        st.pop();
        ans.push_back(ele);
    }

    return ans;
}
int main()
{
    return 0;
}