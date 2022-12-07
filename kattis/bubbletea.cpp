#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int min = 1000000000;
    int n;
    cin >> n;
    vi prices;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        prices.pb(x);
    }

    int m;
    cin >> m;
    vi toppings;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        toppings.pb(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        while (x--) {
            int y;
            cin >> y;

            int cost = prices[i] + toppings[y - 1];
            if (cost < min) {
                min = cost;
            }
        }
    }

    int x;
    cin >> x;

    int students = floor(x / min) - 1;
    if (students < 0) students = 0;
    cout << students << endl;

    return 0;
}