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

    int n;

    while (cin >> n) {
        vi v;
        bool jolly = true;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.pb(x);
        }

        if (n == 1) {
            cout << "Jolly" << endl;
            continue;
        }

        vector<bool> b(n - 1, false);

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(v[i] - v[i + 1]);
            if (diff >= 0 && diff < n) {
                b[diff] = true;
            }
        }

        for (int i = 1; i < n; i++) {
            if (!b[i]) {
                jolly = false;
                break;
            }
        }

        if (jolly) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}