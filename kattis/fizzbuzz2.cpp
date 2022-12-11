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

    int n, m;
    cin >> n >> m;

    vi numErrors(n);
    int minErrors = 100000000;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            string s;
            cin >> s;

            if (j % 3 == 0 && j % 5 == 0) {
                if (s != "fizzbuzz") {
                    numErrors[i]++;
                }
                numErrors[i]++;
            } else if (j % 3 == 0) {
                if (s != "fizz") {
                    numErrors[i]++;
                }
            } else if (j % 5 == 0) {
                if (s != "buzz") {
                    numErrors[i]++;
                }
            } else if (s != to_string(j)) {
                numErrors[i]++;
            }
        }

        minErrors = min(numErrors[i], minErrors);
    }

    for (int i = 0; i < n; i++) {
        if (numErrors[i] == minErrors) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}