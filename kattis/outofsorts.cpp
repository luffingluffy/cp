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

int binarySearch(vector<ll> &v, ll x) {
    int l = 0;
    int r = v.size() - 1;

    while (l < r) {
        int m = (l + r) / 2;
        if (v[m] == x) {
            return m;
        }

        if (v[m] < x) {
            l = m + 1;

        } else {
            r = m - 1;
        }
    }

    return l;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll m, a, c, x;
    cin >> n >> m >> a >> c >> x;

    vector<ll> v;

    for (int i = 0; i < n; i++) {
        x = (a * x + c) % m;
        v.push_back(x);
    }

    int ans = 0;
    for (auto x : v) {
        int pos = binarySearch(v, x);
        if (v[pos] == x) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}