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

    int n, m;
    cin >> n >> m;

    char grid[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int i = 0;
    int j = 0;
    int ans = 0;

    while (i < n && j < m) {
        if (grid[i][j] == '_') {
            i++;
        } else {
            i = 0;
            j++;
        }
        if (i == n) {
            ans++;
            i = 0;
            j++;
        }
    }

    cout << ++ans << endl;

    return 0;
}