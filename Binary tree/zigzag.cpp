#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// level order traversal with queue

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if (!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    bool ltor = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> v(size);

        for (int i = 0; i < size; i++) {
            TreeNode* fnode = q.front();
            q.pop();
            int index = ltor ? i : size - 1 - i;
            v[index] = fnode->val;

            if (fnode->left) q.push(fnode->left);
            if (fnode->right) q.push(fnode->right);
        }
        ltor = !ltor;
        ans.push_back(v);
    }
    return ans;
}


int main() {
   
    return 0;
}