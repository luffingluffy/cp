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

    int n;
    cin >> n;
    double sum = 0;
    double denom = n;

    while (n--) {
        double x;
        cin >> x;

        if (x == -1) {
            denom--;
            continue;
        }
        sum += x;
    }

    cout << fixed << setprecision(3) << sum / denom << endl;

    return 0;
}