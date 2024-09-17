#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

// condition hata do

vector<int> bottomView(Node *root)
{
    // Your Code Here
    vector<int> ans;
    if (!root)
        return ans;

    map<int, int> bottomnode;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *frontnode = q.front().first;
        int hd = q.front().second;
        q.pop();

        bottomnode[hd] = frontnode->data;

        if (frontnode->left)
            q.push({frontnode->left, hd - 1});
        if (frontnode->right)
            q.push({frontnode->right, hd + 1});
    }

    for (auto e : bottomnode)
    {
        ans.push_back(e.second);
    }
    return ans;
}
int main()
{
    return 0;
}