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

    int n;
    cin >> n;

    while (n--) {
        int s, d;
        cin >> s >> d;

        int s1 = (s + d) / 2;
        int s2 = s - s1;

        if (s1 < 0 || s2 < 0) {
            cout << "impossible" << endl;
        } else if (s1 + s2 != s || abs(s1 - s2) != d) {
            cout << "impossible" << endl;
        } else {
            cout << s1 << " " << s2 << endl;
        }
    }

    return 0;
}