// ***Time Travelling Temperatures Solution***
// Difficulty: 2.2
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 41%
// CPU Time: 0.00 s
// Author: Torbjørn Morland
// Source: IDI Open 2016
// Link: https://open.kattis.com/problems/temperature


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    float x, y;
    cin >> x >> y;

    if (x == 0 && y == 1) {
        cout << "ALL GOOD" << endl;
    } else if (y == 1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << setprecision(9) << x / (1 - y) << endl;
    }

    return 0;
}
