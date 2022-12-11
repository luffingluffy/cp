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

    int ans = 0;
    vs d;
    vs k;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        d.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        k.push_back(s);
    }

    sort(d.begin(), d.end());
    sort(k.begin(), k.end());

    while (d.size() > 0 && k.size() > 0) {
        if (k.back() == d.back()) {
            d.pop_back();
            k.pop_back();
            ans++;
        } else if (k.back() < d.back()) {
            d.pop_back();
        } else {
            k.pop_back();
        }
    }

    cout << ans << endl;

    return 0;
}