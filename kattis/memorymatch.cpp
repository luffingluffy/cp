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

    int n, k;
    cin >> n >> k;

    int unknown = n;
    unordered_map<string, int> singles;
    unordered_set<string> pairs;
    int ans = 0;

    while (k--) {
        int c1, c2;
        cin >> c1 >> c2;

        string p1, p2;
        cin.ignore();
        cin >> p1 >> p2;

        if (p1 == p2) {
            if (pairs.count(p1)) {
                pairs.erase(p1);
            } else if (singles.count(p1)) {
                singles.erase(p1);
                unknown--;
            } else {
                unknown -= 2;
            }
        } else {
            if (singles.count(p1)) {
                if (singles[p1] != c1) {
                    singles.erase(p1);
                    pairs.insert(p1);
                    unknown--;
                }
            } else if (!pairs.count(p1)) {
                singles[p1] = c1;
                unknown--;
            }

            if (singles.count(p2)) {
                if (singles[p2] != c2) {
                    singles.erase(p2);
                    pairs.insert(p2);
                    unknown--;
                }
            } else if (!pairs.count(p2)) {
                singles[p2] = c2;
                unknown--;
            }
        }
    }

    ans = pairs.size();
    if (unknown == 2 && singles.empty()) {
        ans++;
    } else if (unknown == singles.size()) {
        ans += unknown;
    }

    cout << ans << endl;

    return 0;
}