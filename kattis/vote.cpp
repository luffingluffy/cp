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
        int sum = 0;
        int max = -1;
        int id = -1;
        bool unique = true;

        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            sum += x;

            if (x > max) {
                unique = true;
                max = x;
                id = i;
            } else if (x == max) {
                unique = false;
            }
        }
        if (max > sum / 2) {
            cout << "majority winner " << id << endl;
        } else if (unique) {
            cout << "minority winner " << id << endl;
        } else {
            cout << "no winner" << endl;
        }
    }

    return 0;
}