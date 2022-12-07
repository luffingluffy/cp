#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2;
    cin >> n1 >> n2;

    n2 -= n1;
    if (n2 <= -180) {
        n2 += 360;
    }

    if (n2 > 180) {
        n2 -= 360;
    }
    cout << n2 << endl;

    return 0;
}