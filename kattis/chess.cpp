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

struct coord {
    int x, y;
};

unordered_map<char, int> map1 = {
    {'A', 1},
    {'B', 2},
    {'C', 3},
    {'D', 4},
    {'E', 5},
    {'F', 6},
    {'G', 7},
    {'H', 8}};

unordered_map<int, char> map2 = {
    {1, 'A'},
    {2, 'B'},
    {3, 'C'},
    {4, 'D'},
    {5, 'E'},
    {6, 'F'},
    {7, 'G'},
    {8, 'H'}};

unordered_map<string, coord> dir = {
    {"UR", {-1, 1}},
    {"UL", {-1, -1}},
    {"DR", {1, 1}},
    {"DL", {1, -1}}};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int sy, ey;
        char sx, ex;
        cin >> sx >> sy >> ex >> ey;

        coord start = {map1[sx], sy};
        coord end = {map1[ex], ey};

        if (sx == ex && sy == ey) {
            cout << 0 << " " << sx << " " << sy << endl;
            continue;
        }

        vector<coord> move1;
        for (int i = 0; i < 9; i++) {
            for (auto d : dir) {
                int x = start.x + d.second.x * i;
                int y = start.y + d.second.y * i;

                if (x > 0 && x < 9 && y > 0 && y < 9) {
                    move1.pb({x, y});
                }
            }
        }

        bool done = false;
        for (auto coord : move1) {
            if (coord.x == end.x && coord.y == end.y) {
                done = true;
                cout << 1 << " " << map2[start.x] << " " << start.y << " "
                     << map2[end.x] << " " << end.y << endl;
            }
        }

        if (done) continue;

        vector<coord> move2;
        for (int i = 0; i < 9; i++) {
            for (auto d : dir) {
                int x = end.x + d.second.x * i;
                int y = end.y + d.second.y * i;

                if (x > 0 && x < 9 && y > 0 && y < 9) {
                    move2.pb({x, y});
                }
            }
        }

        coord first_move = {-1, -1};
        for (auto move1 : move1) {
            for (auto move2 : move2) {
                if (move1.x == move2.x && move1.y == move2.y) {
                    first_move = move1;
                }
            }
        }

        if (first_move.x == -1 && first_move.y == -1) {
            cout << "Impossible" << endl;
        } else {
            cout << 2 << " " << map2[start.x] << " " << start.y << " "
                 << map2[first_move.x] << " " << first_move.y << " "
                 << map2[end.x] << " " << end.y << endl;
        }
    }

    return 0;
}