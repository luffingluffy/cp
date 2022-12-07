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

    int t;
    cin >> t;

    while (t--) {
        vi y;
        int ans = 0;
        int d, m;
        cin >> d >> m;

        while (m--) {
            int x;
            cin >> x;

            for (int i = 1; i <= x; i++) {
                y.pb(i);
            }
        }

        for (int i = 0; i < d; i++) {
            if (y[i] == 13 && i % 7 == 5) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}