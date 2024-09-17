#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution {
    
    private:
    int height(Node* root){
        if(root==NULL) return 0;
        
        return max(height(root->left),height(root->right))+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int>diameterfast(Node* root){
       if(root==NULL) {
           pair<int,int>p={0,0};
           return p;
       } 
       
       pair<int,int>left=diameterfast(root->left);
        pair<int,int>right=diameterfast(root->right);
        
        int op1=left.first;
        int op2=right.first;
        int op3=left.second+right.second+1;
        
        pair<int,int>ans;
        
        ans.first=max({op1,op2,op3});
        ans.second=max(left.second,right.second)+1;
        
        return ans;
    }
    
    int diameter(Node* root) {
        // Your code here
        return diameterfast(root).first;
       
    }
};

int main(){
return 0;
}