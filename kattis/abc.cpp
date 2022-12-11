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

    vector<int> v(3);

    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());

    string s;
    cin >> s;

    if (s == "ABC") {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    } else if (s == "ACB") {
        cout << v[0] << " " << v[2] << " " << v[1] << endl;
    } else if (s == "BAC") {
        cout << v[1] << " " << v[0] << " " << v[2] << endl;
    } else if (s == "BCA") {
        cout << v[1] << " " << v[2] << " " << v[0] << endl;
    } else if (s == "CAB") {
        cout << v[2] << " " << v[0] << " " << v[1] << endl;
    } else if (s == "CBA") {
        cout << v[2] << " " << v[1] << " " << v[0] << endl;
    }

    return 0;
}