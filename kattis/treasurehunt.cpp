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

    int r, c;
    cin >> r >> c;

    vvc map(r);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char c;
            cin >> c;
            map[i].push_back(c);
        }
    }

    int num_moves = 0;
    int i = 0;
    int j = 0;

    while (1) {
        if (i < 0 || j < 0 || i >= r || j >= c) {
            cout << "Out" << endl;
            return 0;
        }
        if (num_moves > r * c * 2) {
            cout << "Lost" << endl;
            return 0;
        }
        if (map[i][j] == 'T') {
            cout << num_moves << endl;
            return 0;
        } else if (map[i][j] == 'N') {
            i--;
        } else if (map[i][j] == 'S') {
            i++;
        } else if (map[i][j] == 'E') {
            j++;
        } else if (map[i][j] == 'W') {
            j--;
        }

        num_moves++;
    }

    return 0;
}