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

    int m, l, M, L, tm, tl;
    cin >> m >> l >> M >> L >> tm >> tl;

    if (abs(0 - m) + abs(m - M) <= tm && abs(0 - m) + abs(m - M) + abs(M - l) + abs(l - L) <= tl) {
        cout << "possible" << endl;
    } else if (abs(0 - l) + abs(l - L) <= tl && abs(0 - l) + abs(l - L) + abs(L - m) + abs(m - M) <= tm) {
        cout << "possible" << endl;
    } else if (abs(0 - m) + abs(m - l) + abs(l - L) <= tl && abs(0 - m) + abs(m - l) + abs(l - L) + abs(L - l) + abs(l - M) <= tm) {
        cout << "possible" << endl;
    } else if (abs(0 - l) + abs(l - m) + abs(m - M) <= tm && abs(0 - l) + abs(l - m) + abs(m - M) + abs(M - m) + abs(m - L) <= tl) {
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
    }

    return 0;
}