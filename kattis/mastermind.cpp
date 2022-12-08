#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string c, g;
    cin >> n >> c >> g;

    int r = 0;
    int s = 0;

    string c2, g2;

    for (int i = 0; i < n; i++) {
        if (c[i] == g[i]) {
            r++;
        } else {
            c2.pb(c[i]);
            g2.pb(g[i]);
        }
    }

    for (int i = 0; i < c2.size(); i++) {
        if (g2.find(c2[i]) != string::npos) {
            s++;
            g2.erase(g2.find(c2[i]), 1);
        }
    }

    cout << r << " " << s << endl;

    return 0;
}