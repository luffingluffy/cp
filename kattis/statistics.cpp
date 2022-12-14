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
    int t = 1;

    while (cin >> n) {
        int min = 1000000;
        int max = -1000000;

        while (n--) {
            int x;
            cin >> x;

            if (x < min) min = x;
            if (x > max) max = x;
        }

        cout << "Case " << t++ << ": " << min << " " << max << " " << max - min << endl;
    }
    return 0;
}