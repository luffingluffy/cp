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

    int n, p, s;
    cin >> n >> p >> s;

    while (s--) {
        int m;
        cin >> m;

        bool b = false;

        while (m--) {
            int c;
            cin >> c;
            if (c == p) {
                b = true;
            }
        }

        if (b) {
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
    }

    return 0;
}