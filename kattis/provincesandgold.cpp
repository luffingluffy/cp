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

    int g, s, c;
    cin >> g >> s >> c;

    int bp = g * 3 + s * 2 + c;

    if (bp >= 8) {
        cout << "Province or Gold" << endl;
    } else if (bp >= 6) {
        cout << "Duchy or Gold" << endl;
    } else if (bp >= 5) {
        cout << "Duchy or Silver" << endl;
    } else if (bp >= 3) {
        cout << "Estate or Silver" << endl;
    } else if (bp >= 2) {
        cout << "Estate or Copper" << endl;
    } else {
        cout << "Copper" << endl;
    }

    return 0;
}