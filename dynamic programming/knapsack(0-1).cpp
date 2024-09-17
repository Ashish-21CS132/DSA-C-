#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

vector<vector<int>> dp;
// Function to return max value that can be put in knapsack of capacity W.
int fun(int w, int n, int wt[], int val[])
{

    if (w == 0 || n < 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n] > w)
        return fun(w, n - 1, wt, val);

    int include = val[n] + fun(w - wt[n], n - 1, wt, val);
    int exclude = fun(w, n - 1, wt, val);

    return dp[n][w] = max(include, exclude);
}

int knapSack(int W, int wt[], int val[], int n)
{
    // Your code here
    dp.resize(n + 1, vector<int>(W + 1, -1));

    return fun(W, n - 1, wt, val);
}
