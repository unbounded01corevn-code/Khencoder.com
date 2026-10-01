#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

long long n;
set<int> st;

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
    	int x;
    	cin >> x;
    	st.insert(x);
	}
}

// ========== SOLVE ==========
void solve() {
    
}

// ========== OUTPUT ==========
void output() {
    for (int x : st) cout << x << " ";
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
