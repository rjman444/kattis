#include <bits/stdc++.h>

using namespace std;

void solve() {
 int s1, s2, r1, r2;
 int p1, p2;
 while ( cin >> s1 ) {
     if (s1 == 0) break;
     cin >> s2 >> r1 >> r2;
     if ((s1 == 1 && s2 == 2) || (s1 == 2 && s2 == 1)) {
        p1 = 1000;
     } else if ( s1 == s2 ) {
        p1 = s1 * 100;
     } else if ( s1 > s2 ) {
        p1 = s1 * 10 + s2;
     } else if ( s2 > s1 ) {
        p1 = s2 * 10 + s1;
     }

     if ((r1 == 1 && r2 == 2) || (r1 == 2 && r2 == 1)) {
        p2 = 1000;
     } else if ( r1 == r2 ) {
        p2 = r1 * 100;
     } else if ( r1 > r2 ) {
        p2 = r1 * 10 + r2;
     } else if ( r2 > r1 ) {
        p2 = r2 * 10 + r1;
     }

     if (p1 > p2) {
         cout << "Player 1 wins." << "\n";
     } else if (p2 > p1) {
         cout << "Player 2 wins." << "\n";
     } else {
         cout << "Tie." << "\n";
     }
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

