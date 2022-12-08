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

    string n, m;
    cin >> n >> m;

    while (n.back() == '0' && m.back() == '0') {
        n.pop_back();
        m.pop_back();
    }

    int len_diff = n.length() - m.length();

    if (len_diff + 1 == n.length()) {
        cout << n << endl;
        return 0;
    }

    if (n.length() < m.length()) {
        cout << "0.";
        for (int i = 0; i < m.length() - n.length() - 1; i++) {
            cout << "0";
        }
        cout << n << endl;
        return 0;
    } else {
        for (int i = 0; i < len_diff + 1; i++) {
            cout << n[i];
        }

        if (len_diff + 1 == 0) {
            cout << "0";
        }

        cout << ".";

        for (int i = len_diff + 1; i < n.length(); i++) {
            cout << n[i];
        }
    }

    cout << endl;

    return 0;
}