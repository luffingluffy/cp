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

    int t;
    cin >> t;

    while (t--) {
        vi v;
        int ans = 0;

        int n;
        while (cin >> n) {
            if (n == 0) {
                break;
            }

            v.push_back(n);
        }

        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] > 2 * v[i]) {
                ans += v[i + 1] - 2 * v[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}