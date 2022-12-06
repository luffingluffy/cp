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

    int n;
    cin >> n;
    vi queue(n);
    queue[0] = 1;

    for (int i = 2; i <= n; i++) {
        int d;
        cin >> d;
        queue[d + 1] = i;
    }

    for (auto i : queue) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}