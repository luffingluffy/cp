// ***Quality-Adjusted Life-Year Solution***
// Difficulty: 1.3
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 60%
// CPU Time: 0.00 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/qaly


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

    double ans = 0;
    int n;
    cin >> n;

    while (n--) {
        double q, y;
        cin >> q >> y;
        ans += q * y;
    }

    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}
