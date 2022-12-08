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

    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vvi image(h, vi(w));
    vvi conv_kernel(n, vi(m));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int t;
            cin >> t;

            image[i][j] = t;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int t;
            cin >> t;

            conv_kernel[i][j] = t;
        }
    }

    for (int i = 0; i < h - n + 1; i++) {
        for (int j = 0; j < w - m + 1; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    sum += image[i + k][j + l] * conv_kernel[k][l];
                }
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}