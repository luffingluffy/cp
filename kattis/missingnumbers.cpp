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

    int prev = 1;
    int val;
    set<ll> missed;

    for (int i = 0; i < n; i++) {
        cin >> val;
        for (int j = prev; j < val; j++) {
            missed.insert(j);
        }

        prev = val + 1;
    }

    if (missed.size() != 0) {
        for (auto x : missed) {
            cout << x << endl;
        }
    } else {
        cout << "good job" << endl;
    }

    return 0;
}