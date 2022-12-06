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

    int n;
    cin >> n;
    vector<string> v;
    vector<string> va;
    vector<string> vd;

    while (n--) {
        string s;
        cin >> s;
        v.pb(s);
    }

    va = v;
    vd = v;
    sort(va.begin(), va.end());
    sort(vd.begin(), vd.end(), greater<string>());

    if (v == va) {
        cout << "INCREASING" << endl;
    } else if (v == vd) {
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }

    return 0;
}