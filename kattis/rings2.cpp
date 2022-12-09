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

    vvc grid(103, vc(103));

    for (int i = 0; i < 103; i++) {
        for (int j = 0; j < 103; j++) {
            grid[i][j] = '.';
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }

    bool swapMade = true;
    int ringLevel = 0;
    while (swapMade) {
        ringLevel++;
        swapMade = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (grid[i][j] == 'T' && (grid[i - 1][j] == '.' || grid[i + 1][j] == '.' || grid[i][j - 1] == '.' || grid[i][j + 1] == '.')) {
                    grid[i][j] = ringLevel;
                    swapMade = true;
                }
                if (grid[i][j] == 'T' && (grid[i - 1][j] == ringLevel - 1 || grid[i + 1][j] == ringLevel - 1 || grid[i][j - 1] == ringLevel - 1 || grid[i][j + 1] == ringLevel - 1)) {
                    grid[i][j] = ringLevel;
                    swapMade = true;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (ringLevel < 10) {
                if (grid[i][j] == '.') {
                    cout << "..";
                } else {
                    cout << '.' << int(grid[i][j]);
                }
            } else {
                if (grid[i][j] == '.') {
                    cout << "...";
                } else {
                    if (int(grid[i][j]) >= 10)
                        cout << '.' << int(grid[i][j]);
                    else
                        cout << ".." << int(grid[i][j]);
                }
            }
        }
        cout << endl;
    }

    return 0;
}