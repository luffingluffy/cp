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

    int b;
    cin >> b;

    for (int i = 1; i <= b; i++) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int ans = 0;

        string s, t;
        cin >> s >> t;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && t[i] == '1') a++;
            if (s[i] == '1' && t[i] == '0') b++;
            if (s[i] == '?' && t[i] == '0') c++;
            if (s[i] == '?' && t[i] == '1') d++;
        }

        ans = min(a, b);
        a -= ans;
        b -= ans;

        if (a > 0) {
            ans += a + c + d;
        } else {
            if (d < b) {
                ans = -1;
            } else {
                ans += b;
                c -= b;

                ans += b;
                ans += c + d;
            }
        }
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}