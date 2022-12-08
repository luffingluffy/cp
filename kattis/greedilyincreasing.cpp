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
    cin >> n;

    vi v;

    while (n--) {
        int x;
        cin >> x;

        if (v.empty() || v.back() < x) {
            v.pb(x);
        }
    }
    cout << v.size() << endl;

    for (auto x : v) {
        cout << x << " ";
    }

    return 0;
}