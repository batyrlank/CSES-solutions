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
	ll n;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n *= 3;
			n++;
		}
	}
	cout << 1;
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
