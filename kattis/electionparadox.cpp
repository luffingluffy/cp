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

    vi pop;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pop.pb(x);
    }

    int min_regions = n / 2 + 1;
    sort(pop.rbegin(), pop.rend());

    int ans = 0;

    for (int i = 0; i < pop.size(); i++) {
        if (i < pop.size() - min_regions) {
            ans += pop[i];
        } else {
            ans += pop[i] / 2;
        }
    }

    cout << ans << endl;

    return 0;
}