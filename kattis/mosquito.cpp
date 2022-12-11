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

    int m, p, l, e, r, s, n;
    while (cin >> m >> p >> l >> e >> r >> s >> n) {
        while (n--) {
            int newL = e * m;
            int newP = l / r;
            int newM = p / s;

            l = newL;
            p = newP;
            m = newM;
        }

        cout << m << endl;
    }

    return 0;
}