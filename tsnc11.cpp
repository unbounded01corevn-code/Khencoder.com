#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

double a;

// ========== INIT ==========
void init() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen(".INP", "r", stdin);
//    freopen(".OUT", "w", stdout);
}

// ========== INPUT ==========
void input() {
    cin >> a;
}

// ========== SOLVE ==========
void solve() {
    
}

// ========== OUTPUT ==========
void output() {
    double hv = a * a;
    double bk = a / 2;
    double ht = bk * bk * 3.14;
    cout << fixed << setprecision(2);
    cout << hv - ht;
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
