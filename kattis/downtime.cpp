#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int ceildiv(int x, int y) {
    return (x + y - 1) / y;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    unordered_map<int, int> m;
    int processing = 0;

    while (n--) {
        int t;
        cin >> t;
        m[t]++;
    }

    for (int i = 0; i < 1000; i++) {
        processing += m[i];
    }

    int ans = processing;
    for (int i = 1000; i <= 100000; i++) {
        processing += m[i];
        processing -= m[i - 1000];
        ans = max(ans, processing);
    }

    cout << ceildiv(ans, k) << endl;

    return 0;
}