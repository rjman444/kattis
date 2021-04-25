#include <bits/stdc++.h>

using namespace std;

void solve() {
    int cd, nd;
    cin >> cd;
    cin >> nd;
    if (nd > cd && (nd - cd) <= 180) {
        cout << nd - cd;
    } else if (nd > cd && (nd - cd) > 180 ) {
        cout << - (360 - (nd - cd));
    } else if (cd > nd && (cd - nd) <= 180 ) {
        if (cd - nd == 180) cout << 180;
        else cout << - (cd - nd);
    } else if (cd > nd && (cd - nd) > 180) {
        cout << 360 - (cd - nd);
    } else if (cd == nd) {
        cout << 0;
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

