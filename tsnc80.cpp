#include <bits/stdc++.h>
using namespace std;

const long long N = 1e3 + 7;
const long long INF = 1e9 + 7;

long long n, ans;

// ========== INIT ==========
void init() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("txt.INP", "r", stdin);
//    freopen(".OUT", "w", stdout);
}

// ========== INPUT ==========
void input() {
    cin >> n;
}

// ========== SOLVE ==========
void solve() {
	
}

// ========== OUTPUT ==========
void output() {
	while (n > 0) {
		long long sqN = sqrt(n);
		cout << sqN << " ";
		n -= sqN * sqN;
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
