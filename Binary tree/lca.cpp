#include<bits/stdc++.h>
using namespace std;

//tree structure
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};

// if(root->left && root->right) return root; ascenters are not null
// if(root->left && !root->right) return root->left; left is not null

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;

        if(root==p || root==q) return root;

        TreeNode* leftans=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightans=lowestCommonAncestor(root->right,p,q);

        if(leftans && rightans) return root;
        else if(!leftans && rightans) return rightans;
        else if(leftans && !rightans) return leftans;
        else return NULL;
    }

int main(){
return 0;
}