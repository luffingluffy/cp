#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w, l;
    int counter = 1;

    while (cin >> w >> l) {
        if (w == 0 && l == 0) break;

        vvc v(l, vc(w));
        int x, y;
        char dir;

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < w; j++) {
                char c;
                cin >> c;
                v[i][j] = c;
                if (c == '*') {
                    x = i;
                    y = j;
                }
            }
        }

        if (x > 0 && y == 0) {
            dir = 'r';

        } else if (x == 0 && y > 0) {
            dir = 'd';

        } else if (x == l - 1 && y > 0) {
            dir = 'u';

        } else {
            dir = 'l';
        }

        while (true) {
            if (dir == 'r') {
                if (v[x][y + 1] == '.') {
                    y++;
                    dir = 'r';
                } else if (v[x][y + 1] == '/') {
                    y++;
                    dir = 'u';
                } else if (v[x][y + 1] == '\\') {
                    y++;
                    dir = 'd';
                } else if (v[x][y + 1] == 'x') {
                    v[x][y + 1] = '&';
                    y++;
                    break;
                }
            } else if (dir == 'd') {
                if (v[x + 1][y] == '.') {
                    x++;
                    dir = 'd';
                } else if (v[x + 1][y] == '/') {
                    x++;
                    dir = 'l';
                } else if (v[x + 1][y] == '\\') {
                    x++;
                    dir = 'r';
                } else if (v[x + 1][y] == 'x') {
                    v[x + 1][y] = '&';
                    x++;
                    break;
                }
            } else if (dir == 'u') {
                if (v[x - 1][y] == '.') {
                    x--;
                    dir = 'u';
                } else if (v[x - 1][y] == '/') {
                    x--;
                    dir = 'r';
                } else if (v[x - 1][y] == '\\') {
                    x--;
                    dir = 'l';
                } else if (v[x - 1][y] == 'x') {
                    v[x - 1][y] = '&';
                    x--;
                    break;
                }
            } else if (dir == 'l') {
                if (v[x][y - 1] == '.') {
                    y--;
                    dir = 'l';
                } else if (v[x][y - 1] == '/') {
                    y--;
                    dir = 'd';
                } else if (v[x][y - 1] == '\\') {
                    y--;
                    dir = 'u';
                } else if (v[x][y - 1] == 'x') {
                    v[x][y - 1] = '&';
                    y--;
                    break;
                }
            }
        }

        cout << "HOUSE " << counter++ << endl;

        for (auto x : v) {
            for (auto y : x) {
                cout << y;
            }
            cout << endl;
        }
    }

    return 0;
}