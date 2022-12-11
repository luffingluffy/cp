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

    int n;
    cin >> n;

    while (n--) {
        int p;
        cin >> p;

        vector<int> v(3 * p);

        for (int i = 0; i < 3 * p; i++) {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        int ans = 0;
        for (int i = 0; i < p; i++) {
            ans += v[(i * 2) + 1];
        }

        cout << ans << endl;
    }

    return 0;
}