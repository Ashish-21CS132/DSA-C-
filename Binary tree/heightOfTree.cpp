#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL) return 0;
        
        int left=height(node->left);
        int right=height(node->right);
        
        return max(left,right)+1;
    }
};

int main(){
return 0;
}