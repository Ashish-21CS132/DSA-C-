#include <bits/stdc++.h>
using namespace std;

//vertical traversal of binary tree
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;

    if (!root)
        return ans;

    map<int, vector<int>> mp;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        TreeNode *frontnode = q.front().first;
        int hd = q.front().second;
        q.pop();

        mp[hd].push_back(frontnode->val);
        if (frontnode->left)
            q.push({frontnode->left, hd - 1});

        if (frontnode->right)
            q.push({frontnode->right, hd + 1});
    }

    for (auto e : mp)
    {
        ans.push_back(e.second);
    }
    return ans;
}
int main()
{
    return 0;
}