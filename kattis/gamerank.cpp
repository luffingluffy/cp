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

    unordered_map<int, int> map;
    for (int i = 25; i >= 21; i--) {
        map[i] = 2;
    }
    for (int i = 20; i >= 16; i--) {
        map[i] = 3;
    }
    for (int i = 15; i >= 11; i--) {
        map[i] = 4;
    }
    for (int i = 10; i >= 1; i--) {
        map[i] = 5;
    }

    bool legend = false;
    int rank = 25;
    int stars = 0;
    int streak = 0;

    string s;
    cin >> s;

    for (auto x : s) {
        if (x == 'W') {
            streak++;

            if (rank >= 6 && streak >= 3) {
                stars++;
                if (map[rank] + 1 == stars) {
                    rank--;
                    stars = 1;
                }
            }

            stars++;
            if (map[rank] + 1 == stars) {
                rank--;
                stars = 1;
            }

            if (rank == 0) {
                legend = true;
            }

        } else {
            streak = 0;
            if (rank <= 20) {
                stars--;
            }
            if (stars == -1) {
                if (rank == 20) {
                    stars = 0;
                } else {
                    rank++;
                    stars = map[rank] - 1;
                }
            }
        }
    }

    if (legend) {
        cout << "Legend" << endl;
    } else {
        cout << rank << endl;
    }

    return 0;
}