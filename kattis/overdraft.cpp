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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int minimum = INT_MAX;

    int t, cur = 0;

    while (n--) {
        cin >> t;

        cur += t;

        if (cur < 0)
            minimum = min(minimum, cur);
    }

    cout << (minimum != INT_MAX ? -minimum : 0) << endl;

    return 0;
}