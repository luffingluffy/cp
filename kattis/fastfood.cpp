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
        int n, m;
        cin >> n >> m;
        vvi prizes(n);
        vi stickers(m);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;

            prizes[i].pb(k);
            while (k--) {
                int x;
                cin >> x;

                prizes[i].pb(x);
            }

            int v;
            cin >> v;
            prizes[i].pb(v);
        }

        for (int i = 0; i < m; i++) {
            cin >> stickers[i];
        }

        for (int i = 0; i < n; i++) {
            int k = prizes[i][0];
            int v = prizes[i][k + 1];
            bool canClaim = true;

            while (canClaim) {
                for (int j = 1; j <= k; j++) {
                    if (stickers[prizes[i][j] - 1] == 0) {
                        canClaim = false;
                    }
                }

                if (canClaim) {
                    ans += v;
                    for (int j = 1; j <= k; j++) {
                        stickers[prizes[i][j] - 1]--;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}