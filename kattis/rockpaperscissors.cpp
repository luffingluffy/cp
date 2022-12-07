#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int play(string a, string b) {
    if (a == b) return 0;
    if (a == "rock") {
        if (b == "scissors")
            return 1;
        else
            return -1;
    }
    if (a == "paper") {
        if (b == "rock")
            return 1;
        else
            return -1;
    }
    if (a == "scissors") {
        if (b == "paper")
            return 1;
        else
            return -1;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    while (cin >> n >> k) {
        if (n == 0) break;

        vector<vector<double>> record;
        record.resize(n, vector<double>(2, 0));
        int games = k * n * (n - 1) / 2;

        while (games--) {
            int p1, p2;
            string m1, m2;
            cin >> p1 >> m1 >> p2 >> m2;

            int res = play(m1, m2);
            if (res == 1) {
                record[p1 - 1][0]++;
                record[p2 - 1][1]++;
            } else if (res == -1) {
                record[p1 - 1][1]++;
                record[p2 - 1][0]++;
            } else {
                continue;
            }
        }

        for (int i = 0; i < n; i++) {
            if (record[i][0] + record[i][1] == 0) {
                cout << "-" << endl;
            } else {
                cout << fixed << setprecision(3) << record[i][0] / (record[i][0] + record[i][1]) << endl;
            }
        }

        cout << endl;
    }

    return 0;
}