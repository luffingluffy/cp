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

    string w;
    cin >> w;

    set<string> s;
    s.insert(w);

    for (int i = 0; i < n - 1; i++) {
        string t;
        cin >> t;

        if (s.count(t)) {
            cout << "Player " << ((i + 1) % 2) + 1 << " lost" << endl;
            return 0;
        }

        s.insert(t);

        if (w.back() != t.front()) {
            cout << "Player " << ((i + 1) % 2) + 1 << " lost" << endl;
            return 0;
        }

        w = t;
    }

    cout << "Fair Game" << endl;

    return 0;
}