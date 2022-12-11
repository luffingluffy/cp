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

    unordered_map<string, bool> m;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        if (m.count(s2) == 0) {
            m.insert({s2, 0});
        }

        if (s1 == "entry") {
            if (m[s2] == 1) {
                cout << s2 << " entered (ANOMALY)" << endl;
            } else {
                m[s2] = 1;
                cout << s2 << " entered" << endl;
            }
        } else {
            if (m[s2] == 1) {
                m[s2] = 0;
                cout << s2 << " exited" << endl;
            } else {
                cout << s2 << " exited (ANOMALY)" << endl;
            }
        }
    }

    return 0;
}