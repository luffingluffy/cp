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
        string s;
        cin >> s;
        int sum = 0;

        vector<int> num;
        for (int i = 0; i < s.size(); i++) {
            num.push_back(s.at(i) - '0');
        }

        for (int i = num.size(); i >= 0; i -= 2) {
            int x = num[i];
            x *= 2;

            while (x >= 10) {
                int o = x % 10;
                x /= 10;
                x += o;
            }

            num[i] = x;
        }

        for (int i = 0; i < num.size(); i++) {
            sum += num[i];
        }

        if (sum % 10 == 0) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }

    return 0;
}