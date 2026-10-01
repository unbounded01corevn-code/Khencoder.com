#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

long long n;
int a[N] = {};
map<int, int> mp;

// ========== INIT ==========
void init() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen(".INP", "r", stdin);
//    freopen(".OUT", "w", stdout);
}

// ========== INPUT ==========
void input() {
    cin >> n;
    for (long long i = 1; i <= n; ++i) {
    	cin >> a[i];
    	mp[a[i]]++;
	}
}

// ========== SOLVE ==========
void solve() {
    sort(a + 1, a + 1 + n);
}

// ========== OUTPUT ==========
void output() {
    for (long long i = 1; i <= n; ++i) {
    	if (mp[a[i]] != 0) {
    		cout << a[i] << " " << mp[a[i]] << '\n';
    		mp[a[i]] = 0;
		}
	}
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
