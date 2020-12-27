#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define pb push_back
typedef long long ll;
typedef vector<ll> vi;
typedef vector<bool> vb;
const int mod = 1e9 + 7;
const string ln = "\n";

void solve() {
  ll x, n;
  cin >> n;
  vi a(n), b(n), c;
  map<ll, ll> am, bm, cm;

  rep(i, 1, n) cin >> x, a[i - 1] = x, am[x]++, cm[x]++;
  rep(i, 1, n) cin >> x, b[i - 1] = x, bm[x]++, cm[x]++;

  for (auto key : cm) {
    if (key.second & 1) {
      cout << -1 << ln;
      return;
    }
    x = abs(am[key.first] - key.second / 2);
    rep(i, 0, x - 1) { c.pb(key.first); }
  }
  sort(c.begin(), c.end());
  ll ans = 0;
  x = c.size();
  rep(i, 1, x / 2) { ans += c[i - 1]; }
  cout << ans << ln;
}

int main() {
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
