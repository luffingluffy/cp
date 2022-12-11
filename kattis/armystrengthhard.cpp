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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vi ng;
        vi nm;

        int ng_size;
        int nm_size;
        cin >> ng_size;
        cin >> nm_size;

        for (int i = 0; i < ng_size; i++) {
            int x;
            cin >> x;
            ng.push_back(x);
        }

        for (int i = 0; i < nm_size; i++) {
            int x;
            cin >> x;
            nm.push_back(x);
        }

        sort(ng.begin(), ng.end());
        sort(nm.begin(), nm.end());

        int g = 0;
        int m = 0;
        while (g < ng_size && m < nm_size) {
            if (ng[g] < nm[m]) {
                g++;
            } else {
                m++;
            }
        }

        if (g == ng_size) {
            cout << "MechaGodzilla" << endl;
        } else {
            cout << "Godzilla" << endl;
        }
    }

    return 0;
}