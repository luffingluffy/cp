#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;

    cin >> n >> s;

    for (int i = n; i >= 1; i--) {
        string l1;
        string l2;
        if (i == 1) {
            l1 = to_string(i) + " bottle of " + s + " on the wall, " + to_string(i) + " bottle of " + s + ".";
            l2 = "Take it down, pass it around, no more bottles of " + s + ".";
        } else if (i == 2) {
            l1 = to_string(i) + " bottles of " + s + " on the wall, " + to_string(i) + " bottles of " + s + ".";
            l2 = "Take one down, pass it around, 1 bottle of " + s + " on the wall.";
        } else {
            l1 = to_string(i) + " bottles of " + s + " on the wall, " + to_string(i) + " bottles of " + s + ".";
            l2 = "Take one down, pass it around, " + to_string(i - 1) + " bottles of " + s + " on the wall.";
        }

        cout << endl;
        cout << l1 << endl;
        cout << l2 << endl;
    }

    return 0;
}