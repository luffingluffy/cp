#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, string> map = {
        {"A#", "Bb"},
        {"Bb", "A#"},
        {"C#", "Db"},
        {"Db", "C#"},
        {"D#", "Eb"},
        {"Eb", "D#"},
        {"F#", "Gb"},
        {"Gb", "F#"},
        {"G#", "Ab"},
        {"Ab", "G#"},
    };

    int i = 1;
    string note, tonality;
    while (cin >> note >> tonality) {
        cout << "Case " << i++ << ": ";
        if (map.count(note) >= 1) {
            cout << map[note] + " " + tonality << endl;
        } else {
            cout << "UNIQUE" << endl;
        }
    }

    return 0;
}