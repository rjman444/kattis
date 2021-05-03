#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    bool ss;
    for (auto &c : s) {
        if (c == 's' && ss) {
            cout << "hiss";
            return;
        } else if (c == 's') {
            ss = true;
        } else {
            ss = false;
        }
    }
    cout << "no hiss";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}

