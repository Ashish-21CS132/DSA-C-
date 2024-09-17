#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

//vertical order traversal with queue

vector<int> topView(Node *root)
{
    // Your code here
    vector<int> ans;
    map<int, int> topnode;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *frontnode = q.front().first;
        int vdis = q.front().second;
        q.pop();

        if (topnode.find(vdis) == topnode.end())
        {
            topnode[vdis] = frontnode->data;
        }

        if (frontnode->left)
            q.push({frontnode->left, vdis - 1});

        if (frontnode->right)
            q.push({frontnode->right, vdis + 1});
    }

    for (auto e : topnode)
    {
        ans.push_back(e.second);
    }
    return ans;
}

int main()
{
    return 0;
}