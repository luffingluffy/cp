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
    char curr1 = s[0], curr2 = s[0], curr3 = s[0];
    int o1 = 0, o2 = 0, o3 = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != curr1) {
            curr1 = s[i];
            o1++;
        }
        if (curr1 == 'D') {
            curr1 = 'U';
            o1++;
        }

        if (s[i] != curr2) {
            curr2 = s[i];
            o2++;
        }
        if (curr2 == 'U') {
            curr2 = 'D';
            o2++;
        }

        if (s[i] != curr3) {
            curr3 = s[i];
            o3++;
        }
    }

    cout << o1 << endl;
    cout << o2 << endl;
    cout << o3 << endl;

    return 0;
}