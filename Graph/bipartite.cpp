#include <bits/stdc++.h>
using namespace std;

vector<int> color;

//bipartite is the adjacent nodes should have different colors

bool dfs(vector<vector<int>> &graph, int node, bool col)
{
    color[node] = col;

    for (auto nei : graph[node])
    {
        if (color[nei] == -1)
        {
            bool isbi = dfs(graph, nei, !col);
            if (!isbi)
                return 0;
        }
        else if (color[nei] == col)
        {
            return 0;
        }
    }
    return 1;
}

bool isBipartite(vector<vector<int>> &graph)
{
    int n = graph.size();
    color.resize(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            bool isbi = dfs(graph, i, 0);
            if (!isbi)
                return 0;
        }
    }

    return 1;
}
int main()
{
    return 0;
}