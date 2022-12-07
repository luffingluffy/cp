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

    int ans = 0;
    map<char, int> m;

    string s;
    while (cin >> s) {
        m[s[0]]++;
    }

    for (auto i : m) {
        ans = max(ans, i.second);
    }

    cout << ans << endl;
}