#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int f=1;
    
    int hg(Node* root){
      if(root==NULL) return 0;
      int l=hg(root->left);
      int r=hg(root->right);
      
      if(abs(l-r)>1) f=0;
      
      return max(l,r)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        hg(root);
        return f;
        
    }
};

int main(){
return 0;
}
