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

    vi v(1000001, 0);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        v[x]++;
        if (v[x + 1]) v[x + 1]--;
    }

    for (int i = 0; i < 1000001; i++) {
        ans += v[i];
    }

    cout << ans << endl;

    return 0;
}