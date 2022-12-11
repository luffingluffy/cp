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

    int b, k, g;
    cin >> b >> k >> g;

    if (g == 0) {
        return 0;
    }

    b--;

    int x = k / g;
    int d = b / x;

    if (b % x > 0) {
        d++;
    }

    cout << ceil(d) << endl;

    return 0;
}