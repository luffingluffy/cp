// ***Cetiri Solution***
// Difficulty: 1.8
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 55%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2007/2008, contest #3
// Link: https://open.kattis.com/problems/cetiri


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi v;
    int i, j, k;
    cin >> i >> j >> k;

    v.pb(i);
    v.pb(j);
    v.pb(k);
    sort(v.begin(), v.end());

    int diff1 = v[1] - v[0];
    int diff2 = v[2] - v[1];

    if (diff1 < diff2) {
        cout << v[1] + diff1 << endl;
    } else if (diff1 > diff2) {
        cout << v[0] + diff2 << endl;
    } else {
        cout << v[2] + diff1 << endl;
    }

    return 0;
}
