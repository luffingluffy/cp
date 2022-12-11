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

bool solve(int s, int a, int b) {
    if (s % (a + b) == 0 || s % (a + b) == a) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s;
    cin >> s;
    cout << s << ":" << endl;

    for (int i = 2; i <= (s + 1) / 2; i++) {
        for (int j = -1; j <= 0; j++) {
            if (solve(s, i, i + j)) {
                cout << i << "," << i + j << endl;
            }
        }
    }

    return 0;
}