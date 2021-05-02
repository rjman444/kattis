#include <bits/stdc++.h>

using namespace std;

void solve() {
    int time;
    int totalTime = 0;
    int solvedProblems = 0;
    string problem, solved;
    
    vector<string> problems;
    while (cin >> time) {
        if (time == -1) break;
        cin >> problem >> solved;
        if (solved == "right") {
            totalTime += time;
            solvedProblems++;
            for (const auto& p : problems) {
               if (p == problem) {
                   totalTime += 20;
               }
            }
        } else {
            problems.push_back(problem);
        }
    }
    cout << solvedProblems << " " << totalTime;
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

