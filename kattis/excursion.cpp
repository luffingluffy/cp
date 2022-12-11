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

    vector<ll> v(3, 0);

    string s;
    cin >> s;

    for (auto i : s) {
        v[i - '0']++;
    }

    ll ans = 0;

    for (auto i : s) {
        if (i == '0') {
            v[0]--;
        } else {
            ans += v[0];
        }
    }

    for (auto i : s) {
        if (i == '1') {
            v[1]--;
        }
        if (i == '2') {
            ans += v[1];
        }
    }

    cout << ans << endl;

    return 0;
}