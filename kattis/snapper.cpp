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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        int k;
        cin >> n >> k;

        bool on = true;
        for (int j = 0; j < n; j++) {
            if (k % 2 == 0) {
                on = false;
            }
            k /= 2;
        }

        cout << "Case #" << i + 1 << ": ";

        if (on) {
            cout << "ON" << endl;
        } else {
            cout << "OFF" << endl;
        }
    }

    return 0;
}