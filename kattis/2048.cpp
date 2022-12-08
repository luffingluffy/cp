#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

vector<int> swipeLeft(vector<int> v) {
    // Non-zero elements
    vector<int> v2;
    for (int i = 0; i < 4; i++) {
        if (v[i] != 0) {
            v2.push_back(v[i]);
        }
    }

    // Add dummy 0
    v2.push_back(0);

    // Merge same numbers
    for (int i = 0; i < v2.size(); i++) {
        if (v2[i] == v2[i + 1]) {
            v2[i] *= 2;
            v2[i + 1] = 0;
        }
    }

    // Slide left
    vector<int> v3;
    for (int i = 0; i < v2.size(); i++) {
        if (v2[i] != 0) {
            v3.push_back(v2[i]);
        }
    }

    // Add 0s
    int blanks = 4 - v3.size();
    for (int i = 0; i < blanks; i++) {
        v3.push_back(0);
    }

    return v3;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vvi grid(4, vi(4));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int t;
            cin >> t;

            grid[i][j] = t;
        }
    }

    int dir;
    cin >> dir;

    if (dir == 0) {
        // Left
        for (int i = 0; i < 4; i++) {
            grid[i] = swipeLeft(grid[i]);
        }
    }
    if (dir == 1) {
        // Up
        for (int i = 0; i < 4; i++) {
            vector<int> v(4);
            v[0] = grid[0][i];
            v[1] = grid[1][i];
            v[2] = grid[2][i];
            v[3] = grid[3][i];

            v = swipeLeft(v);

            grid[0][i] = v[0];
            grid[1][i] = v[1];
            grid[2][i] = v[2];
            grid[3][i] = v[3];
        }
    }
    if (dir == 2) {
        // Right
        for (int i = 0; i < 4; i++) {
            reverse(grid[i].begin(), grid[i].end());
            grid[i] = swipeLeft(grid[i]);
            reverse(grid[i].begin(), grid[i].end());
        }
    }
    if (dir == 3) {
        // Down
        for (int i = 0; i < 4; i++) {
            vector<int> v(4);
            v[3] = grid[0][i];
            v[2] = grid[1][i];
            v[1] = grid[2][i];
            v[0] = grid[3][i];

            v = swipeLeft(v);

            grid[0][i] = v[3];
            grid[1][i] = v[2];
            grid[2][i] = v[1];
            grid[3][i] = v[0];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}