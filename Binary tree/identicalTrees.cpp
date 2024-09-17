#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(!r1 && !r2)return 1;
        if((r1 && !r2) || (!r1 && r2))return 0;
        
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        bool value=r1->data==r2->data;
        
        if(left && right && value)return 1;
        
        return 0;
        
    }
};

int main(){
return 0;
}