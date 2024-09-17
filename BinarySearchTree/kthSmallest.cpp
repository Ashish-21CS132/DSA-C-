#include <bits/stdc++.h>
using namespace std;

// structure of tree
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
}

int kthSmallest(TreeNode *root, int k)
{

    vector<int> v;
    inorder(root, v);

    return v[k - 1];
}
int main()
{
    return 0;
}