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

    while (n--) {
        string s;
        cin >> s;

        int l = s.length();
        int m = ceil(sqrt(l));
        char board[m][m];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (i * m + j < l) {
                    board[i][j] = s[i * m + j];
                } else {
                    board[i][j] = '*';
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = m - 1; j >= 0; j--) {
                if (board[j][i] != '*') {
                    cout << board[j][i];
                }
            }
        }

        cout << endl;
    }

    return 0;
}