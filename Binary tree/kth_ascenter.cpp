#include<bits/stdc++.h>
using namespace std;

//tree structure
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x): data(x),left(NULL),right(NULL){}
};

// if(root->left && !root->right) k--; if (k==0) return root ans

Node* solve(Node* root,int &k,int node){
    if(!root) return NULL;
    
    if(root->data==node)return root;
    
    Node* leftans=solve(root->left,k,node);
    Node* rightans=solve(root->right,k,node);
    
    //wapas
    if(leftans && !rightans){
        k--;
        if(k<=0){
            //lock answer
            k=INT_MAX;
            return root;
        }
        return leftans;
    }
    
     if(!leftans && rightans){
        k--;
        if(k<=0){
            //lock answer
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    
    return NULL;
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    Node* ans=solve(root,k,node);
    if(ans==NULL || ans->data==node)return -1;
    else return ans->data;
}
int main(){
return 0;
}