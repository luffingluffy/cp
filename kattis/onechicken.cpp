#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    if (n > m) {
        if (n - m == 1) {
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << endl;
        }
    } else {
        if (m - n == 1) {
            cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        } else {
            cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << endl;
        }
    }

    return 0;
}