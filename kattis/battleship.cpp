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

    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;

        char board[2][30][30];
        int ships[2];
        ships[0] = ships[1] = 0;

        for (int s = 0; s < 2; s++) {
            for (int y = h - 1; y >= 0; --y) {
                for (int x = 0; x < w; ++x) {
                    char ch;
                    cin >> ch;
                    board[s][x][y] = ch;
                    if (ch == '#') ships[s]++;
                }
            }
        }

        bool end = false;
        int turn = 0;
        while (n--) {
            int x, y;
            cin >> x >> y;
            if (end) continue;
            if (board[1 - turn][x][y] == '#') {
                board[1 - turn][x][y] = ' ';
                ships[1 - turn]--;
                if (ships[1 - turn] == 0) {
                    turn = 1 - turn;
                    if (turn == 0) end = true;
                }
            } else {
                turn = 1 - turn;
                if (turn == 0 && ships[0] * ships[1] == 0)
                    end = true;
            }
        }

        if (ships[0] == 0 && ships[1] > 0) {
            cout << "player two wins" << endl;
        } else if (ships[0] > 0 && ships[1] == 0) {
            cout << "player one wins" << endl;
        } else {
            cout << "draw" << endl;
        }
    }

    return 0;

    return 0;
}