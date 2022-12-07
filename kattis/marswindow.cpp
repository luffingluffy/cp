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

    int y;
    cin >> y;

    ii optDate = {4, 2018};
    while (optDate.second < y) {
        optDate.first += 26;
        while (optDate.first > 12) {
            optDate.first -= 12;
            optDate.second += 1;
        }
    }

    if (optDate.second == y) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}