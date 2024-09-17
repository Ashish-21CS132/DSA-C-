#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int INF = INT_MAX;

    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }

    int findTheCity(int n, vector<vector<int>> &edges, int tdis)
    {

        vector<vector<int>> adj(n, vector<int>(n, INF));

        for (auto e : edges)
        {
            adj[e[0]][e[1]] = e[2];
            adj[e[1]][e[0]] = e[2];
        }

        // Set self-distances to 0
        for (int i = 0; i < n; ++i)
        {
            adj[i][i] = 0;
        }

        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (adj[i][k] != INF && adj[k][j] != INF)
                    {
                        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                    }
                }
            }
        }

        vector<vector<int>> ans(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (adj[i][j] <= tdis)
                    mp[i]++;
            }
        }

        vector<pair<int, int>> vp;
        for (auto e : mp)
        {
            vp.push_back({e.first, e.second});
        }

        // Ensure all cities are in the map
        for (int i = 0; i < n; i++)
        {
            if (mp.find(i) == mp.end())
            {
                vp.push_back({i, 0});
            }
        }

        sort(vp.begin(), vp.end(), cmp);

        return vp[0].first;
    }
};