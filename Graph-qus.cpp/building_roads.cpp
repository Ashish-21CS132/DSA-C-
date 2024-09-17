#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()

vector<ll> lead;
vector<ll> adj[100001];
vector<bool> vis(100001, 0);

// Example
// Input:

// 4 2 cities, roads
// 1 2
// 3 4
// Output:

// 1
// 2 3
 
void dfs(ll i)
{
  vis[i] = 1;
  for (auto e : adj[i])
  {
    if (!vis[e])
    {
      dfs(e);
    }
  }
}
 
void sol()
{
 
  ll n, m;
  cin >> n >> m;
 
  for (ll i = 1; i <= m; i++)
  {
    ll x, y;
    cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
 
  for (ll i = 1; i <= n; i++)
  {
    if (!vis[i])
    {
 
      lead.pb(i);
      dfs(i);
    }
  }
 
  cout << sz(lead) - 1 << endl;
  for (ll i = 0; i < sz(lead) - 1; i++)
  {
    cout << lead[i] << " " << lead[i + 1] << endl;
  }
}

int main(){
return 0;
}