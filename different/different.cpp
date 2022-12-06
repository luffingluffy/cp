// ***A Different Problem Solution***
// Difficulty: 2.8
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 36%
// CPU Time: 0.00 s
// Author: No author
// Source: Kattis
// Link: https://open.kattis.com/problems/different


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
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
