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

    int x;
    cin >> x;

    int p;

    while (x > 9) {
        p = 1;
        while (x > 0) {
            int d = x % 10;
            if (d) p *= d;
            x /= 10;
        }
        x = p;
    }

    cout << p << endl;

    return 0;
}