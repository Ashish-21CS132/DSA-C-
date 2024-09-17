#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void travleft(Node *root, vector<int> &ans)
{
    if (!root || !root->left && !root->right)
        return;

    ans.push_back(root->data);

    if (root->left)
        travleft(root->left, ans);
    else
        travleft(root->right, ans);
}

void travleaf(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
        return;
    }

    travleaf(root->left, ans);
    travleaf(root->right, ans);
}

void travright(Node *root, vector<int> &ans)
{
    if (!root || !root->left && !root->right)
        return;

    if (root->right)
        travright(root->right, ans);
    else
        travright(root->left, ans);

    ans.push_back(root->data);
}

vector<int> boundary(Node *root)
{
    // Your code here
    vector<int> ans;

    if (!root)
        return ans;

    ans.push_back(root->data);

    // traverse left
    travleft(root->left, ans);

    // traverse leaf
    // left subtree
    travleaf(root->left, ans);
    // right subtree
    travleaf(root->right, ans);

    // traverse right
    travright(root->right, ans);

    return ans;
}

int main()
{
    return 0;
}