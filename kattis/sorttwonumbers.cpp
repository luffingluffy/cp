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

    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << a << " " << b << endl;
    } else {
        cout << b << " " << a << endl;
    }

    return 0;
}