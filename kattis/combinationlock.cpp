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

    int p, a, b, c;
    while (cin >> p >> a >> b >> c) {
        if (p == 0 && a == 0 && b == 0 && c == 0) break;

        int ans = 40 * 2;
        ans += ((p - a + 40) % 40);
        ans += 40;
        ans += ((b - a + 40) % 40);
        ans += ((b - c + 40) % 40);

        cout << ans * 9 << endl;
    }

    return 0;
}