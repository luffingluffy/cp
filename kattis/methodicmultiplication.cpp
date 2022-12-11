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

    string x, y;
    cin >> x >> y;

    if (x > y) swap(x, y);

    if (x == "0") {
        cout << "0" << endl;

    } else {
        int i = 0, j = 0;
        for (char c : x) {
            if (c == 'S') {
                i++;
            }
        }

        for (char c : y) {
            if (c == 'S') {
                j++;
            }
        }

        int k = i * j;

        for (int i = 0; i < k; i++) {
            cout << "S(";
        }
        cout << "0";

        for (int i = 0; i < k; ++i) {
            cout << ")";
        }
        cout << endl;
    }

    return 0;
}