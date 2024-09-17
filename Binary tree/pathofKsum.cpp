#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x): data(x),left(NULL),right(NULL){}
};

//vector me value store karke check karo ki koi subarray sum k equal hai ya nahi

void solve(Node* root,int k,int &ct,vector<int>&path){
        if(!root) return;
        
        path.push_back(root->data);
        
        solve(root->left,k,ct,path);
        solve(root->right,k,ct,path);
        
        int sum=0;
        for(int i=path.size()-1;i>=0;i--){
            
            sum+=path[i];
            if(sum==k)ct++;
        }
        path.pop_back();
    }
    
    int sumK(Node *root,int k)
    {
        // code here 
        int ct=0;
        vector<int>path;
        solve(root,k,ct,path);
        return ct;
    }
int main(){
return 0;
}