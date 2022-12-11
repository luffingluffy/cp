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

    ll s, c, k;
    cin >> s >> c >> k;

    vector<ll> v(s);

    for (auto& i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());

    ll ans = 1;
    ll curr = 1;
    ll low = v[0];

    for (int i = 1; i < s; i++) {
        if (curr == c) {
            ans++;
            curr = 0;
            low = v[i];
        }

        if (v[i] - low > k) {
            ans++;
            curr = 0;
            low = v[i];
        }

        curr++;
    }

    cout << ans << endl;

    return 0;
}