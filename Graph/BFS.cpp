#include <bits/stdc++.h>
using namespace std;

//level order traversal of graph

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<bool> vis(V);
    vector<int> ans;
    queue<int> q;
    q.push(0);
    vis[0] = 1;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for (auto nei : adj[front])
        {
            if (!vis[nei])
            {
                q.push(nei);
                vis[nei] = 1;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}