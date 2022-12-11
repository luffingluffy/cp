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

    int n, dm;
    cin >> n >> dm;

    int max = 0;
    bool noYears = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > dm) {
            max++;
        } else {
            break;
        }

        if (i == n - 1) {
            noYears = true;
        }
    }

    if (noYears) {
        cout << "It had never snowed this early!" << endl;
    } else {
        cout << "It hadn't snowed this early in " << max << " years!" << endl;
    }

    return 0;
}