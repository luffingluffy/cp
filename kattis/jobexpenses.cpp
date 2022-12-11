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

    int n;
    ll ans = 0;

    cin >> n;

    while (n--) {
        int k;

        cin >> k;

        if (k < 0)
            ans += k * -1;
    }

    cout << ans << endl;

    return 0;
}