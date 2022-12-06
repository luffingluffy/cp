// ***Odd Gnome Solution***
// Difficulty: 1.7
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 56%
// CPU Time: 0.00 s
// Author: Xiayuan Suo
// Source: 2017 ICPC North American Qualifier Contest
// Link: https://open.kattis.com/problems/oddgnome


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

    int n;
    cin >> n;

    while (n--) {
        int g;
        cin >> g;
        int prev = -1;
        int ans = -1;
        int i = 0;

        while (g--) {
            int x;
            cin >> x;

            if (x != prev + 1) {
                ans = i;
            }

            prev = x;
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}
