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
    cin >> n;

    for (int t = 0; t < n; t++) {
        int k;
        cin >> k;

        int ans = 0;
        for (int i = 1; i < k; i++) {
            int o;
            cin >> o;

            ans += o - 1;
        }

        cin >> k;
        ans += k;

        cout << ans << endl;
    }

    return 0;
}