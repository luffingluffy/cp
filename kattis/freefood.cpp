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

    vector<bool> v(365, false);

    int ans = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;

        for (int j = s - 1; j <= t - 1; j++) {
            v[j] = true;
        }
    }

    for (auto b : v) {
        if (b) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}