#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;

    while (cin >> n >> m) {
        ll ans;
        if (n > m) {
            ans = n - m;
        } else {
            ans = m - n;
        }
        cout << ans << endl;
    }

    return 0;
}