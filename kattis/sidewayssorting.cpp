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

bool cmp(string i, string j) {
    for (auto& c : i) {
        c = tolower(c);
    }
    for (auto& c : j) {
        c = tolower(c);
    }

    return i < j;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;

    while (cin >> r >> c) {
        if (r == 0 && c == 0) {
            break;
        }

        vvc v(r, vc(c));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> v[i][j];
            }
        }

        vs s(c);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                s[j] += v[i][j];
            }
        }

        stable_sort(s.begin(), s.end(), cmp);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << s[j][i];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}