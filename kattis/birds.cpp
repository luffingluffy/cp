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

    int l, d, n;
    cin >> l >> d >> n;

    vi v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int curr = 6;

    if (n == 0) {
        ans += (l - 12) / d + 1;
    } else {
        for (int i = 0; i < n; i++) {
            while (v[i] - curr >= d) {
                curr += d;
                ans++;
            }

            curr = v[i] + d;
        }

        while (curr <= l - 6) {
            ans++;
            curr += d;
        }
    }

    cout << ans << endl;

    return 0;
}