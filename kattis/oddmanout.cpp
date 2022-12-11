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

    for (int i = 1; i <= n; ++i) {
        unordered_set<ll> s;

        int g;
        cin >> g;

        for (int j = 0; j < g; ++j) {
            ll c;
            cin >> c;
            if (s.count(c) == 0) {
                s.insert(c);
            } else {
                s.erase(c);
            }
        }

        cout << "Case #" << i << ": ";
        for (auto x : s) {
            cout << x << endl;
        }
    }

    return 0;
}