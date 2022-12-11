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

    unordered_map<string, vi> loc;
    unordered_set<string> dst;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int y;
        cin >> y;

        dst.insert(s);

        if (loc.count(s) < 1) {
            vi v;
            v.push_back(y);
            loc.insert({s, v});
        } else {
            vi& t = loc[s];
            t.push_back(y);
        }
    }

    int q;
    cin >> q;

    for (auto d : dst) {
        vi& t = loc[d];
        sort(t.begin(), t.end());
    }

    for (int i = 0; i < q; i++) {
        string s;
        cin >> s;

        int year;
        cin >> year;

        vi& t = loc[s];

        cout << t[year - 1] << endl;
    }

    return 0;
}