// ***Filip Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 61%
// CPU Time: 0.00 s
// Author: Filip Barl
// Source: Croatian Open Competition in Informatics 2009/2010, contest #3
// Link: https://open.kattis.com/problems/filip


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

    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int x = stoi(a);
    int y = stoi(b);

    if (x > y) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }

    return 0;
}
