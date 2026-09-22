#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const long long INF = 1e9 + 7;

string n;

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
bool isValid() {
	long long nS = n.size(), cnt = n[0] - '0';
    if (nS == 1) return 0;
    for (long long i = 1; i < nS; ++i) {
    	cnt += n[i] - '0';
    	if (n[i] == n[i - 1]) return 0;
	}
//	cout << cnt << " ";
	if (cnt % 9 != 0) return 0;
	return 1; 
}

// ========== OUTPUT ==========
void output() {
    if (isValid()) {
    	cout << n;
	} else {
		cout << -1;
	}
}

// ========== MAIN ==========
int main() {
    init();
    input();
    output();
    return 0;
}
