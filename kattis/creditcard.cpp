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

    int t;
    cin >> t;

    while (t--) {
        double r, b, m;
        cin >> r >> b >> m;

        bool paid = false;
        r /= 100;
        for (int i = 1; i <= 1200; i++) {
            double interest = b * r;
            interest = round(interest * 100) / 100;

            b += interest;
            b = round(b * 100) / 100;

            b -= m;
            if (b < 0.001) {
                cout << i << endl;
                paid = true;
                break;
            }
        }

        if (!paid) {
            cout << "impossible" << endl;
        }
    }

    return 0;
}