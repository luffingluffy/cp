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

    int s = 0;

    int k, n;
    cin >> k >> n;

    while (n--) {
        int t;
        char z;
        cin >> t >> z;

        s += t;

        if (z == 'T' and s < 210) {
            k %= 8;
            k++;
        }
    }

    cout << k << endl;

    return 0;
}