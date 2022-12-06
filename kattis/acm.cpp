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

    unordered_map<char, pair<int, bool>> m;
    int t;
    while (cin >> t && t != -1) {
        char q;
        string s;
        cin >> q >> s;

        if (s == "right") {
            m[q].first += t;
            m[q].second = true;
        } else {
            m[q].first += 20;
        }
    }

    int rights = 0;
    int total = 0;
    for (auto i : m) {
        if (i.second.second) {
            rights++;
            total += i.second.first;
        }
    }

    cout << rights << " " << total << endl;

    return 0;
}