#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    vector<vector<int>> dp;
    int solve(int i, int j, int m, int n)
    {

        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        dp[i][j] = solve(i + 1, j, m, n) + solve(i, j + 1, m, n);

        return dp[i][j];
    }

    int uniquePaths(int m, int n)
    {
        dp.resize(m, vector<int>(n, -1));
        int ans;
        ans = solve(0, 0, m, n);

        return ans;
    }
};