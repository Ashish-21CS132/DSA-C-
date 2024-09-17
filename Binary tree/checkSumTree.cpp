#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

//root->data=left->data+right->data; it is a sum tree

class Solution {
  public:
  
    pair<bool,int>isSumFast(Node* root){
        if(!root){
            pair<bool,int>p={true,0};
            return p;
        }
        
        if(!root->left && !root->right){
            pair<bool,int>p={true,root->data};
            return p;
        }
        
        pair<bool,int>leftans=isSumFast(root->left);
        pair<bool,int>rightans=isSumFast(root->right);
        
        bool condi=root->data==leftans.second+rightans.second;
        
        pair<bool,int>ans;
        if(left && right && condi){
            ans.first=true;
            ans.second=2*root->data;
        }
        else ans.first=false;
        
    }
    
    bool isSumTree(Node* root) {
        // Your code here
        return isSumFast(root).first;
        
    }
};

int main(){
return 0;
}