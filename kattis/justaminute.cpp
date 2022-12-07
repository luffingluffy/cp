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

    double totalMin = 0, totalSec = 0;
    int n;
    cin >> n;

    while (n--) {
        double m, s;
        cin >> m >> s;
        totalMin += (m * 60);
        totalSec += s;
    }

    double ans = totalSec / totalMin;
    if (ans <= 1) {
        cout << "measurement error" << endl;
    } else {
        cout << fixed << setprecision(7) << ans << endl;
    }

    return 0;
}