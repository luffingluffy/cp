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

    int c, n;
    cin >> c >> n;
    int curr = 0;
    int l, e, s;

    while (n--) {
        cin >> l >> e >> s;

        if (curr < l) {
            cout << "impossible" << endl;
            return 0;
        }

        curr += e - l;

        if (curr > c || (curr < c && s > 0)) {
            cout << "impossible" << endl;
            return 0;
        }
    }

    if (curr != 0 || s > 0) {
        cout << "impossible" << endl;
    } else {
        cout << "possible" << endl;
    }

    return 0;
}