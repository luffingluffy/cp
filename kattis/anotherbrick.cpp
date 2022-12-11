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

    int h, w, n;
    cin >> h >> w >> n;

    bool b = false;

    int width = 0;
    int height = 0;

    while (n--) {
        int x;
        cin >> x;

        if (height < h) {
            width += x;

            if (width == w) {
                height++;
                width = 0;
            } else if (width > w) {
                height = h + 1;
            }

            if (height == h)
                b = true;
        }
    }

    if (b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}