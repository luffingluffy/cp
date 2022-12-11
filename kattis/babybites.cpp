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

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        if (s == "mumble") {
            continue;
        } else if (stoi(s) != i) {
            cout << "something is fishy" << endl;
            return 0;
        }
    }

    cout << "makes sense" << endl;

    return 0;
}