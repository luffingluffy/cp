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

    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;

    int dist = abs(a - c) + abs(b - d);

    if (t < dist || (t - dist) % 2) {
        cout << "N" << endl;
    } else {
        cout << "Y" << endl;
    }

    return 0;
}