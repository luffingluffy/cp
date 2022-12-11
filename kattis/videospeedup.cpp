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

    int n, p, k;
    cin >> n >> p >> k;

    vi t(n + 2);

    for (int i = 1; i < n + 1; i++) {
        cin >> t[i];
    }

    t[0] = 0;
    t[n + 1] = k;

    double s = 1;
    double l = 0;

    for (int i = 0; i < n + 1; i++) {
        l += (t[i + 1] - t[i]) * s;
        s += (double)(p / 100.0);
    }

    cout << fixed << setprecision(6) << l;

    return 0;
}