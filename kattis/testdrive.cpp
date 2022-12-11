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

    int a, b, c;
    cin >> a >> b >> c;

    int diff1 = abs(a - b);
    int diff2 = abs(b - c);

    if ((a - b < 0 && b - c > 0) || (a - b > 0 && b - c < 0)) {
        cout << "turned" << endl;
    } else if (diff1 == diff2) {
        cout << "cruised" << endl;
    } else if (diff1 < diff2) {
        cout << "accelerated" << endl;
    } else if (diff1 > diff2) {
        cout << "braked" << endl;
    }

    return 0;
}