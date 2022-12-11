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

    double c, x, m, f;
    int res = -1, s;

    cin >> c >> x >> m;

    for (int i = 0; i < 6; ++i) {
        cin >> s >> f;

        bool b = (m / s) * (x + s / f) <= c / 2.0;

        if (b) {
            res = max(res, s);
        }
    }

    if (res < 0) {
        cout << "NO" << endl;

    } else {
        cout << "YES " << res << endl;
    }

    return 0;
}