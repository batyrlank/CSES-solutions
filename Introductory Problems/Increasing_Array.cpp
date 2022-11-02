// one day...
// bir kunde...
// odnazhdy...

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define watch(x) cout << (#x) << " is " << (x) << '\n'

const int mod = 1e9 + 7;
// const int mod = 998244353;
const int N = 300;
const int P = 55;
bool multi = 0;

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		if (a[i - 1] > a[i]) {
			ans += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}
	cout << ans << '\n';
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout << setprecision(25) << fixed;
	int t = 1;
	if(multi) {
		cin >> t;
	}
	for(int q = 1; q <= t; q++) {
		// cout << "Case #" << q << ": ";
		solve();
	}
	return 0;
}
