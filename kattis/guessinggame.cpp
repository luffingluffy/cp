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

    int n;
    string s;
    vector<bool> v(11, true);

    while (cin >> n) {
        if (n == 0) break;
        cin.ignore();
        getline(cin, s);

        if (s.find("high") != string::npos) {
            for (int i = n; i <= 10; i++) {
                v[i] = false;
            }
        } else if (s.find("low") != string::npos) {
            for (int i = 0; i <= n; i++) {
                v[i] = false;
            }
        } else {
            if (v[n]) {
                cout << "Stan may be honest" << endl;
            } else {
                cout << "Stan is dishonest" << endl;
            }

            v.clear();
            v.resize(11, true);
        }
    }

    return 0;
}