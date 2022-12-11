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
    int tb = 0, lr = 0;

    cin >> t;
    while (t--) {
        char c;
        for (int x = 0; x < 2; x++) {
            cin >> c;
            if (c == '0')
                tb++;
        }
        for (int x = 0; x < 2; x++) {
            cin >> c;
            if (c == '0')
                lr++;
        }
    }

    int sw = min(tb / 2, lr / 2);
    int sw2 = sw * 2;

    cout << sw << ' ' << tb - sw2 << ' ' << lr - sw2;

    return 0;
}