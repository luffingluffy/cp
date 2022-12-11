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

    string s;
    cin >> s;

    if (s[0] == '5' && s[1] == '5' && s[2] == '5') {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}