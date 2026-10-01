#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

long long t, ans = 0;

// ========== INIT ==========
void init() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen(".INP", "r", stdin);
//    freopen(".OUT", "w", stdout);
}

// ========== INPUT ==========
void input() {
    cin >> t; cin.ignore();
}

// ========== SOLVE ==========
void solve() {
	while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        set<string> s;
        string tmp;
        while (ss >> tmp) {
            s.insert(tmp);
        }
        cout << s.size() << '\n';
    }
}

// ========== OUTPUT ==========
void output() {
//    cout << ans;
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
