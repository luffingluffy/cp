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

    char board[8][8];
    ii idx = {-1, -1};
    char dir = 'E';

    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            char ch;
            cin >> ch;
            if (ch == 'T') {
                idx = {x, y};
            }
            board[x][y] = ch;
        }
    }

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            if (dir == 'N') {
                if (idx.first - 1 >= 0 && (board[idx.first - 1][idx.second] == '.' || board[idx.first - 1][idx.second] == 'D')) {
                    board[idx.first][idx.second] = '.';
                    idx.first--;
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'S') {
                if (idx.first + 1 < 8 && (board[idx.first + 1][idx.second] == '.' || board[idx.first + 1][idx.second] == 'D')) {
                    board[idx.first][idx.second] = '.';
                    idx.first++;
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'E') {
                if (idx.second + 1 < 8 && (board[idx.first][idx.second + 1] == '.' || board[idx.first][idx.second + 1] == 'D')) {
                    board[idx.first][idx.second] = '.';
                    idx.second++;
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'W') {
                if (idx.second - 1 >= 0 && (board[idx.first][idx.second - 1] == '.' || board[idx.first][idx.second - 1] == 'D')) {
                    board[idx.first][idx.second] = '.';
                    idx.second--;
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            }

            if (board[idx.first][idx.second] != 'D') {
                board[idx.first][idx.second] = 'T';
            }

        } else if (s[i] == 'L') {
            if (dir == 'N') {
                dir = 'W';
            } else if (dir == 'S') {
                dir = 'E';
            } else if (dir == 'E') {
                dir = 'N';
            } else if (dir == 'W') {
                dir = 'S';
            }
        } else if (s[i] == 'R') {
            if (dir == 'N') {
                dir = 'E';
            } else if (dir == 'S') {
                dir = 'W';
            } else if (dir == 'E') {
                dir = 'S';
            } else if (dir == 'W') {
                dir = 'N';
            }
        } else if (s[i] == 'X') {
            if (dir == 'N') {
                if (idx.first - 1 >= 0 && board[idx.first - 1][idx.second] == 'I') {
                    board[idx.first - 1][idx.second] = '.';
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'S') {
                if (idx.first + 1 < 8 && board[idx.first + 1][idx.second] == 'I') {
                    board[idx.first + 1][idx.second] = '.';
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'E') {
                if (idx.second + 1 < 8 && board[idx.first][idx.second + 1] == 'I') {
                    board[idx.first][idx.second + 1] = '.';
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            } else if (dir == 'W') {
                if (idx.second - 1 >= 0 && board[idx.first][idx.second - 1] == 'I') {
                    board[idx.first][idx.second - 1] = '.';
                } else {
                    cout << "Bug!" << endl;
                    return 0;
                }
            }
        }
    }

    if (board[idx.first][idx.second] != 'D') {
        cout << "Bug!" << endl;
    } else {
        cout << "Diamond!" << endl;
    }

    return 0;
}