#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i, j, k;
    cin >> i >> j >> k;
    vi v{i, j, k};

    sort(v.begin(), v.end());

    int diff1 = v[1] - v[0];
    int diff2 = v[2] - v[1];

    if (diff1 < diff2) {
        cout << v[1] + diff1 << endl;
    } else if (diff1 > diff2) {
        cout << v[0] + diff2 << endl;
    } else {
        cout << v[2] + diff1 << endl;
    }

    return 0;
}