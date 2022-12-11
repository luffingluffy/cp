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

    string s;
    getline(cin, s);
    stringstream ss(s);

    int i = 0;
    int ans = 0;

    char c;
    while (ss >> c) {
        if (isupper(c)) {
            if (i % 4 == 0) {
                i++;
            } else {
                int nop = (((i / 4) + 1) * 4) - i;
                ans += nop;
                i += (nop + 1);
            }
        } else {
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}