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

    int n, s;
    cin >> n >> s;

    int ans = 0;
    int curr = s;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        int water = (str[0] - '0');

        if (str.size() == 2) {
            water++;
        }

        if (water > curr) {
            ans++;
            curr = s;
            curr -= water;
        } else {
            curr -= water;
        }
    }

    cout << ans << endl;

    return 0;
}