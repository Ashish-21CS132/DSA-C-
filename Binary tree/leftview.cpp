#include<bits/stdc++.h>
using namespace std;

//har level ki first node ko print karna hai

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void solve(Node* root,vector<int>&ans,int level){
    if(!root) return;
    
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   solve(root,ans,0);
   return ans;
   
}


int main(){
return 0;
}