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

    int n, k, d, s;
    cin >> n >> k >> d >> s;

    double ans = (d * n - k * s) / (double)(n - k);

    if (ans >= 0 && ans <= 100) {
        cout << fixed << setprecision(6) << ans << endl;
    } else {
        cout << "impossible" << endl;
    }

    return 0;
}