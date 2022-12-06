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

    int n;
    cin >> n;
    int ans = -1;
    int i = 0;
    int min = 10e6;

    while (n--) {
        int x;
        cin >> x;

        if (x < min) {
            min = x;
            ans = i;
        }

        i++;
    }

    cout << ans << endl;

    return 0;
}