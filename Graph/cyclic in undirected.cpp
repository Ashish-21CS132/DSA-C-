#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
vector<bool> vis;
vector<int> par;
bool iscyclic(vector<vector<int>> &edges, int node)
{

    par[node] = -1;
    vis[node] = 1;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto nei : edges[front])
        {
            if (vis[nei] && nei != par[front]) //if the neighbour is not parent of the current node
                return 1;
            else if (!vis[nei])
            {
                q.push(nei);
                vis[nei] = 1;
                par[nei] = front;
            }
        }
    }
    return 0;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Write your code here.
    vis.resize(n, 0);
    par.resize(n);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bool ans = iscyclic(edges, i);
            if (ans == 1)
                return "YES";
        }
    }
    return "NO";
}

int main()
{
    return 0;
}