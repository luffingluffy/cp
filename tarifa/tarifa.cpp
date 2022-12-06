// ***Tarifa Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 56%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2016/2017, contest #1
// Link: https://open.kattis.com/problems/tarifa


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

    int x, n;
    cin >> x >> n;
    int ans = x;

    while (n--) {
        int p;
        cin >> p;
        ans += x - p;
    }

    cout << ans << endl;

    return 0;
}
