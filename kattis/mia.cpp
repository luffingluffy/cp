#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int getScore(int high, int low) {
    if (low > high) {
        swap(low, high);
    }
    if (high == 2 && low == 1) {
        return 10e6;
    }
    if (high == low) {
        return high * 100;
    }
    return high * 10 + low;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s0, s1, r0, r1;
    while (cin >> s0 >> s1 >> r0 >> r1) {
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) break;

        int score1 = getScore(s0, s1);
        int score2 = getScore(r0, r1);

        if (score1 > score2) {
            cout << "Player 1 wins." << endl;
        } else if (score1 < score2) {
            cout << "Player 2 wins." << endl;
        } else {
            cout << "Tie." << endl;
        }
    }

    return 0;
}