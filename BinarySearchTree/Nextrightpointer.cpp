#include <bits/stdc++.h>
using namespace std;

// tree structure
struct Node
{
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

Node *connect(Node *root)
{
    Node *curr = root;

    while (root && root->left)
    {
        Node *next = root->left;

        while (root)
        {
            root->left->next = root->right;
            root->right->next = root->next ? root->next->left : NULL;
            root = root->next;
        }
        root = next;
    }

    return curr;
}
int main()
{
    return 0;
}