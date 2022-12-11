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

    int n, m;
    cin >> n >> m;

    int curr = 0;
    int ans = 0;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        if (curr + x > n) {
            ans = m - i;
            break;
        } else {
            curr += x;
        }
    }

    cout << ans;

    return 0;
}