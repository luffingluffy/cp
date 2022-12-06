#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    double max_val = p * (sin(a + b) + cos(c + d) + 2);
    double max_diff = 0;

    for (int k = 2; k <= n; k++) {
        double x = p * (sin(a * k + b) + cos(c * k + d) + 2);

        if (x > max_val) {
            max_val = x;
        }

        if (max_val - x > max_diff) {
            max_diff = max_val - x;
        }
    }

    cout << fixed << setprecision(6) << max_diff << endl;

    return 0;
}