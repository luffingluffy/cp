#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    cin >> l >> r;

    if (l + r == 0) {
        cout << "Not a moose" << endl;
    } else if (l == r) {
        cout << "Even " << l + r << endl;
    } else {
        cout << "Odd " << max(l, r) * 2 << endl;
    }

    return 0;
}