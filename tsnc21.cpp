#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

double n;

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
}

// ========== SOLVE ==========
void solve() {
    
}

// ========== OUTPUT ==========
void output() {
//	cout << n << " ";
    cout << fixed << setprecision(2);
	cout << ((n * 2) / 3) * n;
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
