#include<bits/stdc++.h>
using namespace std;

// Tree structure   
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


 TreeNode* solve(vector<int>&nums,int st,int end){
        if(st>end)return NULL;

        int mid=(st+end)/2;

        TreeNode* root=new TreeNode(nums[mid]);
        TreeNode* curr=root;
        root->left=solve(nums,st,mid-1);
        root->right=solve(nums,mid+1,end);
        return curr;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root=solve(nums,0,nums.size()-1);

        return root;

       
    }
int main(){
return 0;
}