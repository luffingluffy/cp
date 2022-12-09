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

    int p;
    cin >> p;

    while (p--) {
        int k;
        cin >> k;

        vi v(20);
        for (int i = 0; i < 20; i++) {
            cin >> v[i];
        }

        int ans = 0;
        while (v.size() > 0) {
            int s = 0;

            for (int i = 1; i < v.size(); i++) {
                if (v[i] < v[s]) {
                    s = i;
                }
            }

            ans += s;
            v.erase(v.begin() + s);
        }

        cout << k << " " << ans << endl;
    }

    return 0;
}