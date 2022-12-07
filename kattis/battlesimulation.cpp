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

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            if (s[i + 1] == 'B') {
                if (s[i + 2] == 'L') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            } else if (s[i + 1] == 'L') {
                if (s[i + 2] == 'B') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            }
            cout << 'S';
        } else if (s[i] == 'B') {
            if (s[i + 1] == 'L') {
                if (s[i + 2] == 'R') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            } else if (s[i + 1] == 'R') {
                if (s[i + 2] == 'L') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            }
            cout << 'K';

        } else if (s[i] == 'L') {
            if (s[i + 1] == 'R') {
                if (s[i + 2] == 'B') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            } else if (s[i + 1] == 'B') {
                if (s[i + 2] == 'R') {
                    cout << 'C';
                    i += 2;
                    continue;
                }
            }
            cout << 'H';
        }
    }
    return 0;
}