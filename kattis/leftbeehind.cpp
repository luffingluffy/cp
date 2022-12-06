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

    int x, y;

    while (cin >> x >> y) {
        if (x + y == 0) {
            break;
        } else if (x + y == 13) {
            cout << "Never speak again." << endl;
        } else if (x > y) {
            cout << "To the convention." << endl;
        } else if (x < y) {
            cout << "Left beehind." << endl;
        } else {
            cout << "Undecided." << endl;
        }
    }

    return 0;
}