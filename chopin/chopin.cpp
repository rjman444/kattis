#include <bits/stdc++.h>

using namespace std;

void solve() {
    string note;
    string tonality;
    int caseNum = 1;
    while (cin >> note) {
        cin >> tonality;
        string newNote;
        bool unique = false;

        if (note == "A#") {
            newNote = " Bb ";
        } else if (note == "Bb") {
            newNote = " A# ";
        } else if (note == "C#") {
            newNote = " Db ";
        } else if (note == "Db") {
            newNote = " C# ";
        } else if (note == "D#") {
            newNote = " Eb ";
        } else if (note == "Eb") {
            newNote = " D# ";
        } else if (note == "F#") {
            newNote = " Gb ";
        } else if (note == "Gb") {
            newNote = " F# ";
        } else if (note == "G#") {
            newNote = " Ab ";
        } else if (note == "Ab") {
            newNote = " G# ";
        } else {
            unique = true;
        }

        if (unique) {
            cout << "Case " << caseNum << ":" << " UNIQUE" << "\n";
        } else {
            cout << "Case " << caseNum << ":" << newNote << tonality << "\n";
        }
        caseNum++;
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

