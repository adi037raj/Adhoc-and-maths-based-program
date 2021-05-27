/**
 *  Created:   31.10.2020 19:39:54
 *
**/
#include <bits/stdc++.h>

using namespace std;
#ifdef LOCAL
#include "C:\CP\debug.h"
#else
#define debug(...)
#endif

#define forn(i, n) for(int i = 0; i < n; ++i)
#define pb push_back
#define fi first
#define se second
#define sz(v) (int)(v.size())
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;


void Solve() {
  int n,q; cin >> n >> q;
  vi a(n); forn(i, n) cin >> a[i];
  a.pb(0);
  int ans = 0;
  forn(i, n) {
  	if(a[i] != a[i+1]) {
  		++ans;
  	}
  }
  debug(a,ans);
  for (int i = 0; i < q; ++i) {
  	int x, y;cin >> x >> y;
  	--x;
  	int toadd =0;
  	if( x > 0 && a[x-1] != a[x]) {
  		if( a[x-1] == y) {
  			toadd--;
  		}
  	}
  	if( x < n-1 && a[x+1] != a[x]) {
  		if( a[x+1] == y) {
  			toadd--;
  		}
  	}
  	if( x > 0 && a[x-1] == a[x]) {
  		if( a[x-1] != y) {
  			toadd++;
  		}
  	}
  	if( x < n-1 && a[x+1] == a[x]) {
  		if( a[x+1] != y) {
  			toadd++;
  		}
  	}
  	ans += toadd;
  	a[x] = y;
  	cout << ans <<'\n';
  }


}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0); int tt = 1;
  cin >> tt;
  while ( tt--) {
    Solve();
  }
  return 0;
}
