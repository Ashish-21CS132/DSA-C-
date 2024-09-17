#include <bits/stdc++.h>
using namespace std;
// structure of tree
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
{}};

void inorder(TreeNode *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
}
bool isValidBST(TreeNode *root)
{
    vector<int> v;

    inorder(root, v);
    set<int> s(v.begin(), v.end());
    vector<int> w(s.begin(), s.end());

    for (auto e : v)
    {
        cout << e << " ";
    }
    if (w == v)
        return 1;
    else
        return 0;
}
int main()
{
    return 0;
}