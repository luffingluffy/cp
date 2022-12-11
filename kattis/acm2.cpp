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

    int n, p;
    cin >> n >> p;

    vi v;
    int first;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i != p) {
            v.push_back(x);
        } else {
            first = x;
        }
    }

    sort(v.begin(), v.end());
    v.insert(v.begin(), first);

    int t = 0;
    int total = 0;
    int pen = 0;

    for (int i = 0; total + v[i] <= 300 && i < n; i++) {
        t++;
        total += v[i];
        pen += total;
    }

    cout << t << " " << pen << endl;

    return 0;
}