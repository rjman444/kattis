#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, p;
    cin >> n;
    vector<int> line(n);
    line[0] = 1;
    for (int i = 0; i < n - 1; i++) {
        cin >> p;
        line[p + 1] = i + 2;
    }
    for (auto &i: line) {
        cout << i << " ";
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

