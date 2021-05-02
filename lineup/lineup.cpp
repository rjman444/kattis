#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<string> lineup;
    string p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        lineup.push_back(p);
    }
    vector<string> sl = lineup;
    sort(sl.begin(), sl.end());
    if (sl == lineup) {
        cout << "INCREASING";
        return;
    }
    reverse(sl.begin(), sl.end());
    if (sl == lineup) {
        cout << "DECREASING";
        return;
    } else {
        cout << "NEITHER";
        return;
    }
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

