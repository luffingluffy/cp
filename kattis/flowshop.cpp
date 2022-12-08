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
    vvi grid(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int t;
            cin >> t;

            grid[i].pb(t);
        }
    }

    for (int i = 1; i < n; i++) {
        grid[i][0] += grid[i - 1][0];
    }

    for (int j = 1; j < m; j++) {
        grid[0][j] += grid[0][j - 1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            int x = grid[i][j - 1];
            int y = grid[i - 1][j];
            grid[i][j] += max(x, y);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << grid[i][m - 1] << " ";
    }

    return 0;
}