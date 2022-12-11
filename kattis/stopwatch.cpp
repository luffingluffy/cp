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

    int ans = 0;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            int start, stop;
            cin >> start >> stop;

            ans += stop - start;
        }

        cout << ans << endl;
    } else {
        cout << "still running" << endl;
    }

    return 0;
}