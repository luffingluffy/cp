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

    int k, m;
    while (cin >> k && cin >> m) {
        if (k == 0) {
            break;
        }

        unordered_set<string> sset;
        for (int i = 0; i < k; i++) {
            string s;
            cin >> s;
            sset.insert(s);
        }

        bool b = true;
        for (int i = 0; i < m; i++) {
            int r, c;
            cin >> r >> c;

            int num = 0;
            for (int j = 0; j < r; j++) {
                string s;
                cin >> s;
                if (sset.count(s)) {
                    num++;
                }
            }

            if (num < c) {
                b = false;
            }
        }

        if (b) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}