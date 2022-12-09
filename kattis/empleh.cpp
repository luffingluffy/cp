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

unordered_map<char, int> map1 = {
    {'a', 2},
    {'b', 6},
    {'c', 10},
    {'d', 14},
    {'e', 18},
    {'f', 22},
    {'g', 26},
    {'h', 30}};

unordered_map<char, int> map2 = {
    {'8', 1},
    {'7', 3},
    {'6', 5},
    {'5', 7},
    {'4', 9},
    {'3', 11},
    {'2', 13},
    {'1', 15}};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool white = false;
    vvc board(17, vc(33));

    for (int i = 0; i < 17; i++) {
        if (i % 2 != 0) {
            white = !white;
        }
        for (int j = 0; j < 33; j++) {
            if (i % 2 == 0) {
                if (j % 4 == 0) {
                    board[i][j] = '+';
                } else {
                    board[i][j] = '-';
                }
            } else {
                if (j % 4 == 0) {
                    board[i][j] = '|';
                } else if (white) {
                    board[i][j] = '.';
                    board[i][j + 1] = '.';
                    board[i][j + 2] = '.';
                    white = false;
                    j += 2;
                } else {
                    board[i][j] = ':';
                    board[i][j + 1] = ':';
                    board[i][j + 2] = ':';
                    white = true;
                    j += 2;
                }
            }
        }
    }

    string colour, s;
    cin >> colour >> s;

    if (s == "Black:") {
        vs black_pos;
        string s2;
        cin >> s2;
        stringstream ss2(s2);
        string token;

        while (getline(ss2, token, ',')) {
            black_pos.pb(token);
        }

        for (auto x : black_pos) {
            if (x.length() == 3) {
                board[map2[x[2]]][map1[x[1]]] = tolower(x[0]);
            } else {
                board[map2[x[1]]][map1[x[0]]] = 'p';
            }
        }

        for (auto x : board) {
            for (auto y : x) {
                cout << y;
            }
            cout << endl;
        }

        return 0;
    }

    vs white_pos;
    stringstream ss1(s);
    string token;

    while (getline(ss1, token, ',')) {
        white_pos.pb(token);
    }

    for (auto x : white_pos) {
        if (x.length() == 3) {
            board[map2[x[2]]][map1[x[1]]] = x[0];
        } else {
            board[map2[x[1]]][map1[x[0]]] = 'P';
        }
    }

    vs black_pos;
    cin >> colour >> s;
    stringstream ss2(s);

    while (getline(ss2, token, ',')) {
        black_pos.pb(token);
    }

    for (auto x : black_pos) {
        if (x.length() == 3) {
            board[map2[x[2]]][map1[x[1]]] = tolower(x[0]);
        } else {
            board[map2[x[1]]][map1[x[0]]] = 'p';
        }
    }

    for (auto x : board) {
        for (auto y : x) {
            cout << y;
        }
        cout << endl;
    }

    return 0;
}