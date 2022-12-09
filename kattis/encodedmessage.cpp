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

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = sqrt(s.size());
        vvc v(n, vc(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[j][i] = s[i * n + j];
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j];
            }
        }

        cout << endl;
    }

    return 0;
}