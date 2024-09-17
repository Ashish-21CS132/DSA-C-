#include <bits/stdc++.h>
using namespace std;

//tree structure
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//root->val > p->val && root->val > q->val return root->left else return root->right
//if root->val is between p->val and q->val return root

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root)
        return NULL;

    if (root->val > p->val && root->val > q->val)
    {
        return lowestCommonAncestor(root->left, p, q);
    }
    else if (root->val < p->val && root->val < q->val)
    {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}
int main()
{
    return 0;
}