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

    vi v(5);

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    vi s = v;
    sort(s.begin(), s.end());

    while (v != s) {
        for (int i = 0; i < 4; i++) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                for (int j = 0; j < 5; j++) {
                    cout << v[j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}