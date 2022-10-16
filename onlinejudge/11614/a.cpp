#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    int i;
    cin >> i;

    while (i--) {
        ll n;
        cin >> n;
        int ans = floor(sqrt(2 * n + 0.25) + 0.5) - 1; // arithmetic sequence
        cout << ans << endl;
    }

    return 0;
}