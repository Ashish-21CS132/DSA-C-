#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}



#define ll long long 
int NthRoot(int n, int m) {
  ll l = 1;
  ll h = m;

  while (l <= h) {
    ll mid = (l + h) / 2;
    ll x = 1;
    for (int i = 0; i < n; i++) {
      if (x > m) break;
      x *= mid;
      
    }

    if (x == m) return mid;
    if (x > m) h = mid - 1;
    else l = mid + 1;
  }
  return -1;
}
