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

    ll prev = 1;

    while (n--) {
        ll a, b;
        char op;
        cin >> a >> op >> b;

        ll ans = 0;

        if (op == '+') {
            ans = (a + b) - prev;
        } else if (op == '-') {
            ans = (a - b) * prev;
        } else if (op == '*') {
            ans = pow((a * b), 2);
        } else if (op == '/') {
            if (a % 2 == 0) {
                ans = a / 2;
            } else {
                ans = (a + 1) / 2;
            }
        }

        prev = ans;
        cout << ans << endl;
    }

    return 0;
}