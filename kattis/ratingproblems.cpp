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

    int n, k;
    cin >> n >> k;

    double min = 0;
    double max = 0;

    for (int i = 0; i < k; i++) {
        double x;
        cin >> x;

        min += x;
        max += x;
    }

    for (int i = 0; i < n - k; i++) {
        double x;
        cin >> x;

        min += -3;
        max += 3;
    }

    cout << min / n << " " << max / n << endl;

    return 0;
}