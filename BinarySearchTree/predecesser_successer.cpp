#include <bits/stdc++.h>
using namespace std;

//tree structure

struct Node
{
    int key;
    Node *left, *right;
};

//predecessor==(left subtree ka max element) 
//successor==(right subtree ka min element)

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    pre = nullptr;
    suc = nullptr;

    Node *temp = root;
    while (temp)
    {
        if (temp->key == key)
        {
            // Found the key
            // Predecessor
            if (temp->left)
            {
                pre = temp->left;
                while (pre->right)
                    pre = pre->right;
            }
            // Successor
            if (temp->right)
            {
                suc = temp->right;
                while (suc->left)
                    suc = suc->left;
            }
            return;
        }
        else if (temp->key > key)
        {
            // Go left
            suc = temp;
            temp = temp->left;
        }
        else
        {
            // Go right
            pre = temp;
            temp = temp->right;
        }
    }
}
int main()
{
    return 0;
}