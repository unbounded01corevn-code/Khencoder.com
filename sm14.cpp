#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;


long long t;


// ========== INIT ==========
void init() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen(".INP", "r", stdin);
//    freopen(".OUT", "w", stdout);
}

// ========== INPUT ==========
void input() {
    cin >> t;
}

// ========== SOLVE ==========
void solve() {
    while (t--) {
    	map<char, int> mp;
    	set<int> st;
    	string s;
    	cin >> s;
    	for (char c : s) {
    		mp[c]++;
		}
    	for (char c : s) {
    		if (mp[c] == 1) st.insert(c);
		}
		if (st.size() == 0) cout << -1;
		else {
			for (char c : st) {
				if (mp[c] == 1) {
					cout << c;
				}
			}
		}
		cout << '\n';
	}
}

// ========== OUTPUT ==========
void output() {
//    cout << ;
}

// ========== MAIN ==========
int main() {
    init();
    input();
    solve();
    output();
    return 0;
}
