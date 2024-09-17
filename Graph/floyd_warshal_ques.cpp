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
    long long minimumCost(string s, string tar, vector<char> &orig, vector<char> &chang, vector<int> &cost)
    {
        //   int INF = INT_MAX;
        int n = orig.size();
        vector<vector<int>> adj(26, vector<int>(26, INF));

        // Initialize the adj matrix with given costs
        for (int i = 0; i < n; i++)
        {
            int r = orig[i] - 'a', c = chang[i] - 'a';
            adj[r][c] = min(adj[r][c], cost[i]);
        }

        // Set the cost of transforming a character to itself to 0
        for (int i = 0; i < 26; i++)
        {
            adj[i][i] = 0;
        }

        // Apply Floyd-Warshall algorithm to find the shortest paths
        for (int k = 0; k < 26; k++)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (adj[i][k] != INF && adj[k][j] != INF)
                    {
                        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                    }
                }
            }
        }

        // Calculate the total cost to transform string s to tar
        long long ans = 0;
        for (int i = 0; i < tar.size(); i++)
        {
            int r = s[i] - 'a', c = tar[i] - 'a';
            if (adj[r][c] == INF)
                return -1; // Transformation is impossible
            ans += adj[r][c];
        }

        return ans;
    }
};