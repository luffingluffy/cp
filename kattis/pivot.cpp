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
    cin >> n;

    vi v;
    vi vmin(n);
    vi vmax(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.pb(x);
    }

    vmin[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        vmin[i] = min(v[i], vmin[i + 1]);
    }

    if (v[0] < vmin[1]) {
        ans++;
    }

    if (v[n - 1] > vmin[n - 2]) {
        ans++;
    }

    vmax[0] = v[0];
    for (int i = 1; i < v.size(); i++) {
        vmax[i] = max(v[i], vmax[i - 1]);
    }

    for (int i = 1; i < n - 1; i++) {
        if (v[i] < vmin[i + 1] && v[i] > vmax[i - 1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}