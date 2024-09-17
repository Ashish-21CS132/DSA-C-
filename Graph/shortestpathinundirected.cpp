
#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<int> par;

void dfs(vector<int> adj[], int node, int parent)
{
    vis[node] = 1;
    par[node] = parent;

    for (auto nei : adj[node])
    {
        if (!vis[nei])
        {
            dfs(adj, nei, node);
        }
    }
}

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{

    // Write your code here
    vis.resize(n+1, 0);
    par.resize(n+1, -1);
    vector<int> adj[n];

    for (auto e : edges)
    {
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first);
    }

    for(auto i:adj)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(adj, i, -1);
        }
    }

    for(auto e:par)
    {
        cout<<e<<" ";
    }

    vector<int> ans;
    int curr = t;

    while (curr != s)
    {
        curr = par[curr];
        ans.push_back(curr);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int>ans;
    ans=shortestPath({{1,2},{1,3},{3,4},{4,5}},5,4,1,5);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}


//BFS version
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define ll long long
#define vll vector<ll>

void sol()
{
 
  ll n, m;
  cin >> n >> m;
  vll adj[n + 1];
  vll parent(n + 1, -1);
  vll vis(n + 1, 0);
 
  for (ll i = 1; i <= m; i++)
  {
    ll x, y;
    
    cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
 
  queue<ll> q;
  q.push(1);
  vis[1] = 1;
 
  while (!q.empty())
  {
    ll front = q.front();
    q.pop();
 
    for (auto e : adj[front])
    {
      if (!vis[e])
      {
        vis[e] = 1;
        parent[e] = front;
        q.push(e);
      }
    }
  }
 
  
      vll ans;
 
  ll curr = n;
  ans.pb(curr);
 
  while (curr != 1)
  {
    curr = parent[curr];
    if(curr==-1){
      cout<<"IMPOSSIBLE"<<endl;
      return;
    }
    ans.pb(curr);
  }
 
  reverse(all(ans));
 
  cout << sz(ans) << endl;
  for (auto e : ans)
  {
    cout << e << " ";
  }
  cout << endl;
}
